#include <iostream>
using namespace std;
int main() {
	


	int a, b, c;
	a = 12;
	b = 13;
	(a > b ? c = a : c = b);


	c = (a > b ? a : b);

	cout << c << endl;
	(a > b ? a : b) = 100;//��Ŀ��������Խ��и�ֵ���㣻
	cout << a<< endl;
	cout << b << endl;
	system("pause");
	return 0;

}