#include <iostream>
using namespace std;
int main() {



	//������е�ˮ�ɻ�������λ������
	int num = 153;
	int a, b, c;
	int sum = 0;

	/*a = num / 100;
	b = num / 10 - 10 * a;
	c = num - 100 * a - 10 * b;
	cout << ((a*a*a) + (b*b*b )+ (c*c*c)) << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;*/




	while (num < 1000) {
		a = num /100;
		b = num / 10 - 10 * a;
		c = num - 100 * a - 10 * b;
		//cout << (a ^ 3 + b ^ 3 + c ^ 3) << endl;

		if (num == ((a * a * a) + (b * b * b) + (c * c * c))) {
			sum++;
			cout << "���ǵ�" << sum << "��ˮ�ɻ�����" << num << endl;
		}
		num++;
	}
	
	cout << "����" << sum << "��ˮ�ɻ���" << endl;


	system("pause");
	return 0;
}