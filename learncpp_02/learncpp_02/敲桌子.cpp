#include <iostream>
using namespace std;


int main() {


	for (int i = 1; i <= 100; i++) {

		if (i % 7 == 0) {
			cout << i << endl;
			continue;
		}
		//�����λ��ʮλ����
		int a = i / 10;
		int b = i - a * 10;//i%10==7


		if (a==7||b == 7) {
			cout << i << endl;
			continue;
		}
	}





	system("pause");
	return 0;

}