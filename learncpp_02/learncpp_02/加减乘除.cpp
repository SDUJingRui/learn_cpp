#include <iostream>
using namespace std;

int main() {

	//定义一个整型变量a，赋值为10；
	int a = 10;
	int b = 7;
	int c = a + b;//加法运算；

	cout << "c = " << c<< endl;
	cout << b / a << endl;//两个整数相除，结果任然是整数，小数部分去掉；
	//两个小数也可以相除
	
	//%取模运算（取余数）ps:两个小数是不能进行取模运算的；
	cout << a % 3 << endl;


	//前置递增,先运算后进行加减惩处运算
	int a1 = 10;
	
	int b1= a1++*10;
	cout << b1 << endl;


	//后置递增，新进行加减乘除运算，在进行递增运算

	//a1++
	// 
	//前置递减


	//后置递减




	system("pause");

	return 0;
}