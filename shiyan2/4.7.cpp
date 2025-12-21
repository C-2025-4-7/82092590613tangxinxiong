#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
		int len2 = strlen(s2);
		for (const char* p2 = s2; p2 <= s2 + len2 - len1; p2++)
		{
			const char* p1 = s1;
			const char* p3 = p2;
			while (*p1 != '\0' && *p1 == *p3)
			{
				p1++;
				p3++;
			}
		
			if (*p1 == '\0') {
				return p2 - s2;
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
	int n = indexof(s1, s2);
	cout << "第一个字符串在第二个字符串中首次出现的位置为：" << n << endl;
}