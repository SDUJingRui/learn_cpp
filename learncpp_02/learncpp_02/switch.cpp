#include <iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "������ " << endl;
	cin >> score;
	cout << "���ķ���Ϊ: "<<score << endl;
	switch (score) {

	case 10:
		cout << "����Ϊ�Ǽ��õ� " << endl;
		break;
	case 9:
		cout << "����Ϊ�Ƿǳ��� " << endl;
		break;
	case 8:
		cout << "����Ϊ�ǻ����� " << endl;
		break;
	default:
		cout << "����Ϊ�Ǻ�һ�� " << endl;
		break;
	}

	/*if&switch
	switch:
	�ŵ㣺�ṹ������ִ��Ч�ʸ�
	ȱ�㣺���ֶܷ�ֻ�������������ַ���
	*/

	system("pause");

	return 0;
}