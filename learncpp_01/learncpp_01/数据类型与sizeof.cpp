//�������ͣ����͡�С����������������ֵ
// �����ͣ�
// �����ȣ�float
// ˫���ȣ�double
// Ĭ������£����һ��С��ֻ����ʾ6λ��Ч����
//�������ʹ��ڵ�������Ǹ�����������ʵ��ڴ�ռ�

//��ѧ������




//�ַ���
//char ch='a';
#include<iostream>
using namespace std;



int main()
{
	//������;
	short a = 12;
	//����
	int b = 10;
	//������
	long c = 10;
	//��������
	long long d = 10;

	cout << a << endl;
	//sizeof���ռ���ڴ��С

	cout << "short����ռ���ڴ��С:" << sizeof(a) <<"�ֽ�"<<endl;



	float f1 = 3.14f;
	cout << f1<< endl;
	double d1 = 3.14;
	cout << d1<< endl;


	//��ѧ������
	float f2 = 3e2;//3*10^2
	float f3 = 3e-2;//3*0.1^2




	//�ַ���
	char ch='a';//�õ����ţ��Ҵ����ַ��ͱ�����ֻ���ǵ�����
	cout << ch << endl;
	cout << (int)ch << endl;
	cout << "char����ռ���ڴ��С:" << sizeof(ch) << "�ֽ�" << endl;
	system("pause");
	return 0;
}