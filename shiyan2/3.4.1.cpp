#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == false)
	{
		cout << "不能构成三角形" << endl;
	}
	else
	{
		cout << "三角形的面积为" << area(a, b, c);
	}
}