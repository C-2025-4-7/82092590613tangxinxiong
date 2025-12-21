#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int b[10];
	for (int i = 0; i < 10; i++)
	{
		b[i] = -1;
	}
	for(int i=0;i<10;i++)
	{
		cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		bool isexist= false;
		for(int j=0;j<count;j++)
		{
			if(a[i]==b[j])
			{
				isexist = true;
				break;
			}
		}
		if (!isexist)
		{
			b[count] = a[i];
			count++;
		}
	}

	for(int i=0;i<count;i++)
	{
		cout << b[i] << " ";
	}
}