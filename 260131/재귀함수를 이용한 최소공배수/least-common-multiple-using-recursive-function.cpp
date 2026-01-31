#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / gcd(a, b);
}

int check(int a[], int idx) {
    if (idx == 0) return a[0];

    return lcm(a[idx], check(a, idx - 1));
}

int main() {
    int n;
    cin >> n;
    int a[10];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << check(a, n - 1);

    return 0;
}