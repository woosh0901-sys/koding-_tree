#include <iostream>
#include <string>

using namespace std;

class Check { 
public:
    string secret_code;
    char meeting_point;
    int time;
    
    Check(string sc, char mp, int t) {
        this->secret_code = sc;
        this->meeting_point = mp;
        this->time = t;
    }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    Check check1 = Check(secret_code, meeting_point, time);

    cout << "secret code : " << check1.secret_code << endl;
    cout << "meeting point : " << check1.meeting_point << endl;
    cout << "time : " << check1.time << endl;

    return 0;
}