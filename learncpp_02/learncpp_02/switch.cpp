#include <iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "请你打分 " << endl;
	cin >> score;
	cout << "你打的分数为: "<<score << endl;
	switch (score) {

	case 10:
		cout << "您认为是极好的 " << endl;
		break;
	case 9:
		cout << "您认为是非常好 " << endl;
		break;
	case 8:
		cout << "您认为是还可以 " << endl;
		break;
	default:
		cout << "您认为是很一般 " << endl;
		break;
	}

	/*if&switch
	switch:
	优点：结构清晰，执行效率高
	缺点：不能分段只能是整数或者字符型
	*/

	system("pause");

	return 0;
}