#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534;
    cout << "output in unsigned int 1 type:" << testUnint << endl;
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;//类型转换后对应的符号不可见出现乱码
    cout << "output in short type:" << static_cast<short>(testUnint) << endl;//int向低类型转换，并且对应补码规则改变
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;//在范围内，输出原值
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;//在范围内，输出65534.0
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;//因为限定4位小数，所以5舍去
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
    cout << "testunint的8进制输出" << oct << testUnint << endl;

    double realNum = 65534;
    int intNum = static_cast<int>(realNum);
    cout << "实数" << realNum << "转换为int的结果" << intNum << endl;//realnum被oct影响以8进制赋值
    system("pause");
}