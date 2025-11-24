#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        double p = a + b + c;
        cout << p << endl;
        if (a == b || a == c || c == b)
            cout << "是等腰三角形" << endl;
        else {
            cout << "不是等腰三角形" << endl;
        }
    }
    else {
        cout << "不能构成三角形" << endl;

    }
}
