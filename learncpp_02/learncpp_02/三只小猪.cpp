#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3;
	int max = 0;
	int num = 0;
	cout << "�Ƚ���ֻС�������" << endl;
	cout << "�������һֻС�������" << endl;
	cin >> a1;

	cout << "������ڶ�ֻС�������" << endl;
	cin >> a2;

	cout << "���������ֻС�������" << endl;
	cin >> a3;
	
	
	max = a1;
	num = 1;
	//�����Ƚ�a1,a2
	if (a1 <a2) {
		max = a2;
		num = 2;
	}
	if (max < a3) {
		max = a3;
		num = 3;
	}
	cout << "��"<<num<<"ֻС�����أ�����Ϊ"<<max << endl;
	system("pause");
	return 0;
}