#include <iostream>
using namespace std;
int check(int n){
    if(n == 1) return 0;
    if(n % 2 == 0) return 1 + check(n/2);
    else return 1 + check(3 * n + 1);
}
int main() {
    int n;
    cin >> n;
    cout << check(n);
    // Please write your code here.
    return 0;
}