#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int start = (11 * 1440) + (11 * 60) + 11;
    int end = (a * 1440) + (b * 60) + c;
    
    int diff = end - start;
    if(diff < 0) cout << "-1";
    else cout << diff;

    // Please write your code here.
    return 0;
}