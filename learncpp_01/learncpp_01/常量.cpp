
#include<iostream>
using namespace std;

//常量的定义方法
//1、#define 宏常量
//2、const修饰的变量

#define Day 7


int main()
{

	const int month = 12;

	cout << "一周有多少天：" << Day << endl;
	cout << "一年有多少个月份：" << month<< endl;

	system("pause");
	return 0;
}