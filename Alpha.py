print("欢迎来到税务计算器，本计算器由Administator制作，徐华玎Debug")
while(1):
    before=float(input("请输入你的税前工资："))
    m1=float(input("请输入你的社保扣除金额："))
    
    s=0.00
    ys=before-m1-5000.00
    ss=0.00
    if ys <= 3000 and ys >0:
        ss=ys*0.03-0.00
    elif ys <= 12000.00:
        ss=ys*0.1-2520.00
    elif ys <= 25000.00:
        ss=ys*0.2-2520.00
    elif ys <= 35000.00:
        ss=ys*0.25-2520.00
    elif ys <= 55000.00:
        ss=ys*0.3-2520.00
    elif ys <= 80000.00:
        ss=ys*0.35-2520.00
    elif ys > 80000.00:
        ss=ys*0.45-2520.00
    kt=before-m1-ss
    print("您应纳税金额：%f到手工资：%f"%(ss,kt))
