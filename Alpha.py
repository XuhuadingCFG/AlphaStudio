print("欢迎来到税务计算器，本计算器由Administator制作，徐华玎Debug")
while(1):
    before=float(input("请输入你的税前工资："))
    m1=float(input("请输入你的社保扣除金额："))
    
    s=0.00
    ys=before-m1-5000.00
    ss=0.00
    if ys <= 36000.00 and ys >0:
        ss=ys*0.03-0.00
    elif ys <= 144000.00:
        ss=ys*0.1-2520.00
    elif ys <= 300000.00:
        ss=ys*0.2-16920.00
    elif ys <= 420000.00:
        ss=ys*0.25-31920.00
    elif ys <= 660000.00:
        ss=ys*0.3-52900.00
    elif ys <= 960000.00:
        ss=ys*0.35-85920.00
    elif ys > 960000.00:
        ss=ys*0.45-181920.00
    kt=before-m1-ss
    print("您应纳税金额：%f到手工资：%f"%(ss,kt))
