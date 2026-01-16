#include <iostream>
using namespace std;

bool check(int m, int d) {
    if (m < 1 || m > 12) return false;

    int last_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (d >= 1 && d <= last_days[m]) {
        return true;
    }

    return false;
}

int main() {
    int m,d;
    cin >> m >> d;

    if(check(m,d))
        cout << "Yes";
    else
        cout << "No";
    // Please write your code here.
    return 0;
}