#include<iostream>
using namespace std;
#include<string>

int main()
{

	//���ͱ���
	int a;
	cout << "������a��ֵ��\n";
	cin >> a;
	cout << "�������a��ֵΪ��"<<a<<endl;
	


	//�����ͱ���
	float f;
	cout << "������f��ֵ\n";
	cin >> f;
	cout << "�������f��ֵΪ��" << f << endl;
	
	//�ַ���
	char ch = 'a';
	cout << "�������ַ���ch��ֵ\n";
	cin >> ch;
	cout << "�������ch��ֵΪ��" << ch << endl;
	//�ַ���
	char str[]="";
	cout << "�������ַ���str��ֵ\n";
	cin >> str;
	cout << "�������str��ֵΪ��" << str << endl;


	string str2 = "";
	cout << "�������ַ���str2��ֵ\n";
	cin >> str2;
	cout << "�������str2��ֵΪ��" << str2 << endl;
	system("pause");
	return 0;
}