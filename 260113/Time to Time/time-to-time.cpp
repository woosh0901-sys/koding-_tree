#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a>> b>> c >> d;
    if(b>d) cout << (c-a) * 60 - (b-d);
    else cout << (c-a) * 60 + (d-b);
    // Please write your code here.
    return 0;
}