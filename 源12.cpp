#include <iostream>
using namespace std;
int main()
{
    int a=5;
    for (int i = 1; i <= a;i++ )
    {
        for (int b = 1; b <= i; b++)
        {
            cout << "*";
        }
        cout << endl;
    }

}