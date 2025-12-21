#include<iostream>
using namespace std;
int main()
{
	bool box[100];
	int s;
	for (int i = 0; i < 100; i++)
	{
		box[i] = true;
	}
	for (s = 2; s <= 100; s++)
	{
		for(int k=1;s*k<100;k++)
		{

			box[s*k-1] = !box[s*k-1];
				
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (box[i])
		{
			cout << i + 1<< " ";
		}
	}

}