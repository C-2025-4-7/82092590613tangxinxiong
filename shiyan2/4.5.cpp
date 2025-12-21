#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	if (len1 > len2)return -1;
	for(int i = 0; i <= len2 - len1; i++)
	{
		int j;
		for (j = 0; j < len1; j++)
		{
			if (s2[i + j] != s1[j])
			{
				break;
			}
		}
		if (j == len1)
		{
			return i;
		}
		
			
	}

	return -1;
}
int main()
{
	char s1[80];
	char s2[80];
	cout << "请输入第一个字符串：" << endl;
	cin.getline(s1, 80);
	cout << "请输入第二个字符串：" << endl;
	cin.getline(s2, 80);
	int n = indexOf(s1, s2);
	cout << "第一个字符串在第二个字符串中首次出现的位置为：" << n << endl;
}