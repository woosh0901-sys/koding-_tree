#include <iostream>
using namespace std;

void year(int n){
    if((n % 4 == 0 && n % 100 != 0)|| n % 400 == 0) cout << "true";
    else cout << "false";
}
int main() {
    int n;
    cin >> n;
    year(n);
    // Please write your code here.
    return 0;
}