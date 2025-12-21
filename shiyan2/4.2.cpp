#include<iostream>
#include<algorithm>
using namespace std;
void bubblesort(double a[],int listsize)
{
	bool change = true;
	do {
		change = false;
		for (int i = 0; i < listsize - 1; i++)
		{
			if (a[i] > a[i + 1])
				{
				swap(a[i], a[i + 1]);
				change = true;
			}
		}
		listsize--;
	} while (change);
}
int main()
{
	double a[10];
	int listsize = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	bubblesort(a,10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i]<< " ";
	}
}