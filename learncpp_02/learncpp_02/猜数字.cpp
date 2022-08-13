#include <iostream>
using namespace std;
#include <ctime>
int main() {

	srand((unsigned int)time(NULL));


	//随机生成一个1-100的数字
	int num = rand() % 100 + 1;
	//cout << num << endl;
	//int num2 = rand() % 100 + 1;
	//cout << num2 << endl;
	//cout << num2 << endl;
	
	int val = 0;
	//cout << "您猜测的值为 " << val << endl;
	while (val !=num) {
		cout << "请您猜测一个数字：" << endl;
		cin >> val;
		cout << "您猜测的值为 "<<val << endl;
		if (val > num) {
			cout << "猜的偏大" << endl;
		}
		if (val < num) {
			cout << "猜的偏小" << endl;
		}
	}
	cout << "恭喜您猜对了，这个数字是： "<<num << endl;


	system("pause");

	return 0;
}