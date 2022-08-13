#include <iostream>
using namespace std;
int main() {


	//顺序语句

	//选择语句

	//if 语句
	int score;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	if (score >= 600) {
		cout << "您考上了一本" << endl;
	}
	else if (score < 600 && score>500) {
		cout << "您考上了二本" << endl;

	}
	else
		cout << "您未考上大学" << endl;

	//嵌套if语句
	//循环语句





	system("pause");
	return 0;

}