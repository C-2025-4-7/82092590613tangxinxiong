
#include <iostream>
using namespace std;
int main()
{
    const double x = 0.8;
    int count = 2;
    int total_count = 2;
    double total_cost = count * x;
    int day = 1;
    while(1){
        day++;
        count *= 2;
        total_count += count;
        total_cost += count * x;
        if (total_count >= 100)
        {
            day--;
            total_count -= count;
            total_cost -= count * x;


            count /= 2;
            
           
                    break;
        }

    }
    double avg_cost = total_cost / day;
    cout << "总天数:" << day  << endl;
    cout << "总花费:" << total_cost << "元" << endl;
    cout << "每天平均花费:" << avg_cost << "元" << endl;

}
