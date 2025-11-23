#include <iostream>
using namespace std;
int main()
{
    /*  int k = 0;
      int i = k + 1;
      cout << i++ << endl;
          cout << i++ << endl;
          cout << "welcome to C++" << endl;*/

    /*double r, h;
    const double PI = 3.1415926;
    cout << "请输入圆锥底面半径";
    cin >> r;
    cout << "请输入圆锥的高";
    cin >> h;
    double volume = (1.0 / 3) * PI * r * r * h;
    cout << "圆锥的体积为" << volume << endl;*/

    /*cout << "char length:" << sizeof(char) << endl;
    cout << "int length:" << sizeof(int) << endl;*/


}
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    unsigned int testUnint = 65534;
        cout << "output in unsigned int 1 type:" <<testUnint << endl;
        cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
        cout << "output in short type:" << static_cast<short>(testUnint) << endl;
        cout << "output in int type:" << static_cast<int>(testUnint) << endl;
        cout << "output in double type:" << static_cast<double>(testUnint) << endl;
        cout << "output in double type:" << setprecision(4)<<static_cast<double>(testUnint) << endl;
        cout << "output in Hex unsigned int type:" <<hex << testUnint << endl;
        cout << "testunint的8进制输出" << oct << testUnint << endl;

        double realNum = 65534;
        int intNum = static_cast<int>(realNum);
        cout << "实数" << realNum << "转换为int的结果" << intNum << endl;
        system("pause");
}
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << (char)(c - 32) << endl;
    }
    else {
        cout << (int)(c + 1) << endl;
    }
    }
#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x;
    if (0 < x && x < 1)
    {
        y = 3 - 2 * x;
    }
    else if (1 <= x && x < 5)
    {
        y = 2.0 / (4 * x) + 1;
    }
    else if (5 <= x && x <= 10)
    {
        y = x * x;
    }
    else {
        cout << "x不在有效范围内" << endl;
        return 1;
    }
    cout << "y=" << endl;
}
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

#include <iostream>
using namespace std;
int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;
int main()
{
    const double x = 0.8;
    int count = 2;
    int total_count = count;
    double total_cost = count*x;
    int day = 1;
    while (true) {
        day++;
        count *= 2;
        if (total_count + count > 100) {
            break;
        }
        total_count += count;
        total_cost += count*x;
        

    }
    double avg_cost = total_cost / (day-1);
    cout << "总天数:" << day-1 << endl;
    cout << "总花费:" << total_cost << "元"<<endl;
    cout << "每天平均花费:" << avg_cost << "元"<< endl;

#include <iostream>
#include <cctype>
#include<string>
using namespace std;
int main()
{
    string line;
    cout << "输入字符";
    getline(cin, line);
    int l = 0, s = 0, d = 0, o = 0;
    for (char c : line) {
        if (isalpha(c)) {
            l++;
        }
        else if (isspace(c)) {
            s++;
        }
        else if (isdigit(c)) {
            d++;
        }
        else   {
            o++;
        }
    }
    cout << "英文字母:" << l<< endl;
        cout << "空格:" << s<< endl;
    cout << "数字:" << d << endl;
    cout << "其他字符:" << o << endl;

}


