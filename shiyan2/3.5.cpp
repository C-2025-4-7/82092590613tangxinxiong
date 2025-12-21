#include<iostream>
using namespace std;
int shengyu(int n)
{
	if (n == 10)
	{
		return 1;
	}
	int i;
	i= (shengyu(n + 1) + 1) * 2;
	return i;
}
int main()
{
	cout << "第一天偷了的个数为：" << shengyu(1);
}