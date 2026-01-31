#include <iostream>
using namespace std;
int check(int n){
    if(n == 1) return 2;
    if(n == 2) return 4;
    else return check(n-1) * check(n-2) % 100;
}
int main() {
    int n;
    cin >> n;
    cout << check(n);
    // Please write your code here.
    return 0;
}