#include <iostream>
using namespace std;

int Fac(int n) {
    if (n <= 1) return 1;
    return n * Fac(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << Fac(n);
    // Please write your code here.
    return 0;
}