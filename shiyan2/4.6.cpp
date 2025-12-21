#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			counts[s[i] - 'a']++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			counts[s[i] - 'A']++;
		}
	}
}
int main()
{
	char s[100];
	int counts[26] = { 0 };
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®£º" << endl;
	cin.getline(s, 100);
	count(s,counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << (char)(i + 'a') << ":" << counts[i] << "times" << endl;
		}
			
	}

}