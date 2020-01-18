print("欢迎来到快递系统！")

zhongliang=int(input("请输入重量"))
nm=input("请输入地点编号（01其他02东三省、宁夏、青海、海南03新疆、西藏04港澳")
p=0

if zhongliang >= 3 :
        if nm=="01":
            p=10+5*(zhongliang-3)
        elif nm=="02":
            p=12+5*(zhongliang-3)
        elif nm=="03":
            p=20+5*(zhongliang-3)
        elif nm=="04":
            print("该地区不支持！")
        else:
            print("未搜索到地区")
        
elif zhongliang <= 3 :
        if nm == "01" :
            p = 10
        elif nm == "02" :
            p = 12
        elif nm == "03" :
            p = 20
        elif nm == "04" :
            print("不支持此地区！")          
        else :
            print("未搜索到地区")
else:
    print("输入错误！")



print("您好，此件包裹价格为：",p,"元！")
