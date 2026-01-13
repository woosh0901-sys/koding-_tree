#include <iostream>
using namespace std;

int main() {
    int m1 ,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    int elapsed_days =0;

    //                         1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int month = m1;
    int day = d1;
    while(true) {
        if(month == m2 && day == d2)
            break;
    
        elapsed_days++;
        day++;
    
        if(day > num_of_days[month]) {
            month++;
            day = 1;
        }
    }
    
    cout << elapsed_days + 1;
    
    return 0;
}
