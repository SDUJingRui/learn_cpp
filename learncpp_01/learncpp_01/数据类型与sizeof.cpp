//数据类型：整型、小数、浮点数、布尔值
// 浮点型：
// 单精度：float
// 双精度：double
// 默认情况下：输出一个小数只会显示6位有效数字
//数据类型存在的意义就是给变量分配合适的内存空间

//科学计数法




//字符型
//char ch='a';
#include<iostream>
using namespace std;



int main()
{
	//短整型;
	short a = 12;
	//整型
	int b = 10;
	//长整型
	long c = 10;
	//长长整型
	long long d = 10;

	cout << a << endl;
	//sizeof求出占用内存大小

	cout << "short类型占用内存大小:" << sizeof(a) <<"字节"<<endl;



	float f1 = 3.14f;
	cout << f1<< endl;
	double d1 = 3.14;
	cout << d1<< endl;


	//科学计数法
	float f2 = 3e2;//3*10^2
	float f3 = 3e-2;//3*0.1^2




	//字符型
	char ch='a';//用单引号，且创建字符型变量是只能是单引号
	cout << ch << endl;
	cout << (int)ch << endl;
	cout << "char类型占用内存大小:" << sizeof(ch) << "字节" << endl;
	system("pause");
	return 0;
}