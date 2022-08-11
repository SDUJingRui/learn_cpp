#include<iostream>
using namespace std;


int main()
{
	bool flag = true;
	cout << flag << endl;//1

	flag = false;

	cout << flag << endl;//0

	cout <<"布尔类型的内存空间" << sizeof(flag) <<"字节"<< endl;//0
	system("pause");

	return 0;
}