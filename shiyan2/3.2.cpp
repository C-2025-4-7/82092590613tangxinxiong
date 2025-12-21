#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	if (num % 2 == 0)
	{
		return false;
	}
	for (int i = 1; i*i<= num; i++) 
	{
		if (num % i == 0) {
			return true;
		}
	}
	return true;

}
int main() 
{
	int n;
	int count=0;
	cout<<"请输入你要找前几个素数";
	cin >> n;
	int i = 2;
	while(count<=n)
	{
		if (is_prime(i))
		{
			cout << i<<" ";
			count++;
		}
		if (count % 10 == 0)
		{
			cout << endl;
		}
		i++;
	}
	return 0;
}