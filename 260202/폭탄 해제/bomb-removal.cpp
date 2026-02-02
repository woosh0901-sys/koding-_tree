#include <iostream>
#include <string>

using namespace std;

class Check{
public:
    string code;
    char wcolor;
    int seconds;

    Check(string code,char wcolor, int seconds){
        this->code = code;
        this->wcolor = wcolor;
        this->seconds = seconds;
    } 
};

int main() {
    string code;
    char wcolor;
    int seconds;

    cin >> code >> wcolor >> seconds;

    Check check1 = Check(code,wcolor,seconds);

    cout << "code : " << check1.code<<"\n";
    cout << "color : " << check1.wcolor<<"\n";
    cout << "second : " << check1.seconds;
    // Please write your code here.

    return 0;
}