#include <iostream>

using namespace std;

void check(int year, int month, int day)
{
    int lastdays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        lastdays[2] = 29;
    }

    if (month < 1 || month > 12 || day < 1 || day > lastdays[month]) {
        cout << "-1";
        return;
    }

    if (month >= 3 && month <= 5) cout << "Spring";
    else if (month >= 6 && month <= 8) cout << "Summer";
    else if (month >= 9 && month <= 11) cout << "Fall";
    else cout << "Winter";
}

int main() {
    int y, m, d;
	cin >> y >> m >> d;
    
    check(y, m, d);
    return 0;
}