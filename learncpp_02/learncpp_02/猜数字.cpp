#include <iostream>
using namespace std;
#include <ctime>
int main() {

	srand((unsigned int)time(NULL));


	//�������һ��1-100������
	int num = rand() % 100 + 1;
	//cout << num << endl;
	//int num2 = rand() % 100 + 1;
	//cout << num2 << endl;
	//cout << num2 << endl;
	
	int val = 0;
	//cout << "���²��ֵΪ " << val << endl;
	while (val !=num) {
		cout << "�����²�һ�����֣�" << endl;
		cin >> val;
		cout << "���²��ֵΪ "<<val << endl;
		if (val > num) {
			cout << "�µ�ƫ��" << endl;
		}
		if (val < num) {
			cout << "�µ�ƫС" << endl;
		}
	}
	cout << "��ϲ���¶��ˣ���������ǣ� "<<num << endl;


	system("pause");

	return 0;
}