#include <iostream>
using namespace std;
int check(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    else return check(n /3) + check(n-1);
}
int main() {
    int n;
    cin >> n;
    cout << check(n);
    // Please write your code here.
    return 0;
}