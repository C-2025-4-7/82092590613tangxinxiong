#include <iostream>
using namespace std;
int main()
{
	double r, h;
	const double PI = 3.1415926;
	cout << "请输入圆锥底面半径";
	cin >> r;
	cout << "请输入圆锥的高";
	cin >> h;
	double V = (1.0 / 3) * PI * r * r * h;
	cout << "圆锥的体积为" << V<< endl;
	return 0;
}