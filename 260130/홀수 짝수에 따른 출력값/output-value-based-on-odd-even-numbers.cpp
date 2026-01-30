#include <iostream>
using namespace std;
int check(int n){
    if (n <= 0) return 0;
    return n + check(n - 2);
}
int main() {
    int n;
    cin >> n;
    cout << check(n);
    // Please write your code here.
    return 0;
}