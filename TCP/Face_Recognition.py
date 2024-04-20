# Face recognition with LBP descriptors.
# See Timo Ahonen's "Face Recognition with Local Binary Patterns".
#
# Before running the example:
# 1) Download the AT&T faces database http://www.cl.cam.ac.uk/Research/DTG/attarchive/pub/data/att_faces.zip
# 2) Exract and copy the orl_faces directory to the SD card root.


import sensor, time, image
import pyb

#SUB = "s1"
NUM_SUBJECTS = 1 #图像库中不同人数，一共6人
NUM_SUBJECTS_IMGS = 20 #每人有20张样本图片

#人脸最小特征
def min(pmin, a, s):
    global num
    if a<pmin:
        pmin=a
        num=s
    return pmin

# 初始化引脚
pin = pyb.Pin("P2", pyb.Pin.IN)
gpio = pyb.Pin("P3", pyb.Pin.OUT_PP)

# 控制外部设备
def control_device(state):
    if state:
        gpio.high()
    else:
        gpio.low()

# 控制外部设备为开启状态
control_device(True)


while True:
# 读取引脚输入状态
    pin_state = pin.value()
    if pin_state:
        sensor.reset() # Initialize the camera sensor.
        sensor.set_pixformat(sensor.GRAYSCALE) # or sensor.GRAYSCALE
        sensor.set_framesize(sensor.B128X128) # or sensor.QQVGA (or others)
        sensor.set_windowing((92,112))
        sensor.skip_frames(10) # Let new settings take affect.
        sensor.skip_frames(time = 5000) #等待5s


        # 拍摄当前人脸。
        img = sensor.snapshot()
        #img = image.Image("singtown/%s/1.pgm"%(SUB))
        d0 = img.find_lbp((0, 0, img.width(), img.height()))
        #d0为当前人脸的lbp特征
        img = None
        pmin = 999999
        num=1


        for s in range(1, NUM_SUBJECTS+1):
            dist = 0
            for i in range(2, NUM_SUBJECTS_IMGS+1):
                img = image.Image("singtown/s%d/%d.pgm"%(s, i))
                d1 = img.find_lbp((0, 0, img.width(), img.height()))
                #d1为第s文件夹中的第i张图片的lbp特征
                dist += image.match_descriptor(d0, d1)#计算d0 d1即样本图像与被检测人脸的特征差异度。
            print("Average dist for subject %d: %d"%(s, dist/NUM_SUBJECTS_IMGS))
            pmin = min(pmin, dist/NUM_SUBJECTS_IMGS, s)#特征差异度越小，被检测人脸与此样本更相似更匹配。
            print(pmin)

        print(num) # num为当前最匹配的人的编号。

    else:
        sensor.reset()                        # 重置感光元件，重置摄像机
        sensor.set_pixformat(sensor.RGB565)   # 设置颜色格式为RGB565，彩色，每个像素16bit
        sensor.set_framesize(sensor.QVGA)     # 图像大小为QVGA
        sensor.skip_frames(time = 2000)       # 跳过n张照片，在更改设置后，跳过一些帧，等待感光元件变稳定。
        sensor.set_auto_gain(False)           # 必须关闭此功能，以防止图像冲洗…
        clock = time.clock()

        while(True and pin_state == 0):
            clock.tick()
            img = sensor.snapshot()  # 截取感光元件中的一张图片
            #采用软件畸变矫正，因为OpenMV标配自带的镜头是2.8mm聚焦的鱼眼镜头，会存在桶形畸变，也就是鱼眼效果，会影响识别二维码
            #畸变矫正运算量比较大，可能会影响帧率。对帧率有要求，可购买无畸变镜头，就无需软件畸变矫正
            img.lens_corr(1.8) # 1.8的强度参数对于2.8mm镜头来说是不错的。
            for code in img.find_qrcodes():     # 进行二维码检测
                img.draw_rectangle(code.rect(), color = (255, 0, 0))
                print(code)                     # 打印二维码内容
            print(clock.fps())                  # 打印帧率
            pin_state = pin.value()

    # 延时一段时间
    pyb.delay(1000)
