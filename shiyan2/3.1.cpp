#include<iostream>
#include<cstdlib>
using namespace std;
//int gcd(int a, int b)//公约数
//{
//	a = abs(a);
//	b = abs(b);
//	if (b == 0) {
//		return a;
//	}
//	return gcd(b, a % b);
//}
//int lcm(int a, int b)//公倍数
//{
//	if (a == 0 || b == 0)
//	{
//		return 0;
//	}
//	return abs(a * b) / gcd(a, b);
//}
void gcd_lcm(int m, int n, int& gcd_result, int& lcm_result)
{
	int a = abs(m);
	int b = abs(n);
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd_result = a;
	if (m == 0 || n == 0)
	{
		lcm_result = 0;
	}
	else
	{
		lcm_result = abs(m * n) / gcd_result;
	}
}
int main() {
	int num1, num2,num3,num4;
	cin >> num1 >> num2;
	gcd_lcm(num1, num2, num3, num4);
	cout << "最大公因数为：" <<num3<< endl;
	cout << "最小公倍数为：" <<num4<< endl;
}
