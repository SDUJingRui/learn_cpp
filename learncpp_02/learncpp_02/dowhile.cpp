#include <iostream>
using namespace std;

int main() {

	//打印0-9十个数字

	int i = 0;
	do {
		cout << i << endl;
		i++;
	}

	while (i < 10);

	cout << "打印完成 " << endl;


	system("pause");

	return 0;

	/*
	do....while和while区别
	do会先执行一次循环再进循环
	
	
	
	
	*/
}