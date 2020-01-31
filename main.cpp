#include <iostream>
using namespace std;

int main()

{
	
    int a,b,c;
	char ads;
    for( ; ;){
    cout<<"欢迎来到简单计算器，本计算器由大西瓜工作室编写，呕吐呕吐。"<<endl<<"--------------------------------------------------------\n";

    cout<<"请输入第一个数与第二个数（每输入完一个数字按一次按回车)："<<endl;
    
    cin>>a>>b;
    
	cout<<"请输入操作符（+-*/）：";
	
	cin>>ads;
    
	switch(ads){
		case '+' :
			c=a+b;
			break;
		case '-' :
			c=a-b;
			break;
		case '*' :
			c=a*b;
			break;
		case '/' :
			c=a/b;
			break;
	}
    
    cout<<"--------------------------------------------------------"<<endl<<"得数："<<c<<endl;}
    

    
	
	
    return 0;

}
