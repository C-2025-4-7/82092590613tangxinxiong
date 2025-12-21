#include<iostream>
#include<cstdlib>
using namespace std;

int parseHex(const char* const hexString)
{
	cout << "输入的十六进制字符串为:" << hexString << endl;
	int a = strtol(hexString,nullptr,16);
	cout << "对应的十进制数为:" << dec << a<< endl;
	return 0;
}
int main()
{
	char hexString[20];
	cout << "请输入一个十六进制字符串：" << endl;
	cin.getline(hexString, 20);
	parseHex(hexString);
	return 0;
}