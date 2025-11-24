#include<iostream>
#include<cmath>
using namespace std;

struct Complex;
	double real;
double imag;
int main()
{

	double a;
	cout << "输入a的值";
	cin >> a;
			if (a > 0) {
				double xn = a / 2.0;//题目里面没给初始值，但是我查了一下要取二分之a
				double xn1;
				const double b = 1e-5;
				while (1) {
					xn1 = 0.5 * (xn + a / xn);
					if (fabs(xn1 - xn) <= b) {
						break;
					}
					else xn = xn1;
				}
				cout << "平方根为:" << xn1 << endl;
			}
			
			else {
				double abs_a = fabs(a);
				double real_part = sqrt(abs_a / 2.0);
				double imag_part = sqrt(abs_a / 2.0);
				cout << "平方根为" << real_part << "+" << real_part << "i和"
					<< real_part << "-" << real_part << "i" << endl;
			
		}
		
}