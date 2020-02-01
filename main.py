import os
import time

print("徐华玎 小小杀手文件夹创建专家正在运行中...")
time.sleep(2)
os.system("cls")

print("本产品由徐华玎制作，如要转载，请联系，QQ：368573607，Web：www.xuhuading.cn")
yn=int(input("请输入需要创建的文件夹的个数并按下回车："))
qz=input("请输入文件名前缀")
hz=input("请输入文件名后缀")
for i in range(yn):
    os.system("md %s%s%s（徐华玎制作，切勿用于恶意用途）"%(qz,i+1,hz))
