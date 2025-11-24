#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	cout << "请输入华氏温标：";
	cin >> a;
	double b = (a - 32) * 5 / 9;
	cout << fixed << setprecision(2);
	cout << "对应的摄氏温标为：" << b << endl;
	return 0;
}