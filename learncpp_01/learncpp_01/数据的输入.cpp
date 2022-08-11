#include<iostream>
using namespace std;
#include<string>

int main()
{

	//整型变量
	int a;
	cout << "请输入a的值：\n";
	cin >> a;
	cout << "您输入的a的值为："<<a<<endl;
	


	//浮点型变量
	float f;
	cout << "请输入f的值\n";
	cin >> f;
	cout << "您输入的f的值为：" << f << endl;
	
	//字符型
	char ch = 'a';
	cout << "请输入字符型ch的值\n";
	cin >> ch;
	cout << "您输入的ch的值为：" << ch << endl;
	//字符串
	char str[]="";
	cout << "请输入字符串str的值\n";
	cin >> str;
	cout << "您输入的str的值为：" << str << endl;


	string str2 = "";
	cout << "请输入字符串str2的值\n";
	cin >> str2;
	cout << "您输入的str2的值为：" << str2 << endl;
	system("pause");
	return 0;
}