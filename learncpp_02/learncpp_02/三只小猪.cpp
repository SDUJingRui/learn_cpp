#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3;
	int max = 0;
	int num = 0;
	cout << "比较三只小猪的体重" << endl;
	cout << "请输入第一只小猪的体重" << endl;
	cin >> a1;

	cout << "请输入第二只小猪的体重" << endl;
	cin >> a2;

	cout << "请输入第三只小猪的体重" << endl;
	cin >> a3;
	
	
	max = a1;
	num = 1;
	//先来比较a1,a2
	if (a1 <a2) {
		max = a2;
		num = 2;
	}
	if (max < a3) {
		max = a3;
		num = 3;
	}
	cout << "第"<<num<<"只小猪最重，体重为"<<max << endl;
	system("pause");
	return 0;
}