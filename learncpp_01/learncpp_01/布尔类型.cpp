#include<iostream>
using namespace std;


int main()
{
	bool flag = true;
	cout << flag << endl;//1

	flag = false;

	cout << flag << endl;//0

	cout <<"�������͵��ڴ�ռ�" << sizeof(flag) <<"�ֽ�"<< endl;//0
	system("pause");

	return 0;
}