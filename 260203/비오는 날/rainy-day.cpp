#include <iostream>
#include <string>

using namespace std;
class Check{
public:
    string date;
    string day;
    string weather;
    Check(){};
    Check(string date, string day, string weather){
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
};
int n;
string date[100];
string day[100];
string weather[100];

int main() {
    cin >> n;

    Check check1[100];

    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
        check1[i] = Check(date[i],day[i],weather[i]);
    }
    int min_idx = -1;

    for (int i = 0; i < n; i++) {
        if (check1[i].weather == "Rain") {
            if (min_idx == -1 || check1[i].date < check1[min_idx].date) {
                min_idx = i;
            }
        }
    }

    if (min_idx != -1) {
        cout << check1[min_idx].date << " " << check1[min_idx].day << " " << check1[min_idx].weather;
    }
    // Please write your code here.

    return 0;
}