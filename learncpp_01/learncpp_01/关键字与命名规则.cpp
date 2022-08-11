//关键字不能命名变量，如int、goto
//
/*
标识符命名规则：
1、不能是关键字
2、有字母、数字、下划线组成
3、首字符不能是数字，只能是下划线和字母
4、是区分大小写的

*/
//建议：见名知意
#include<iostream>
using namespace std;



int main()
{

	int _abc123;
	int abc123;
	//int 123abc;错误不能是数字开头
	int A = 12;
	//int int =10;错误
	int a = 10;

	cout << a << endl;

	system("pause");
	return 0;
}