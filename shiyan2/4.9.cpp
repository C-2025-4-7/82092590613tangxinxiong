#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)//总共要遍历的轮数
	{
		for (int j = 0; j < n - 1 - i; j++)//每论遍历的次数
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int* a = new int[100];
	int n;
	cin >> n;	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << a << endl;
	sort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}