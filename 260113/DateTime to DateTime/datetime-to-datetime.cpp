#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if(a < 11){
        if(b<11){
            if(c<11) cout << "-1";
        }
    }
    else cout << (a-11) * 1440 + (b-11) * 60 + (c-11);

    // Please write your code here.
    return 0;
}