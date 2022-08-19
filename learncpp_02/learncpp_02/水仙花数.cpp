#include <iostream>
using namespace std;
int main() {



	//求出所有的水仙花数（三位数）！
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
			cout << "这是第" << sum << "个水仙花数：" << num << endl;
		}
		num++;
	}
	
	cout << "共有" << sum << "个水仙花数" << endl;


	system("pause");
	return 0;
}