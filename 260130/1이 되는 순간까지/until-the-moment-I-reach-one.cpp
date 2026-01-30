#include <iostream>
using namespace std;

int F(int n) {
    if (n == 1) {
        return 0;
    }
    if (n % 2 == 0) {
        return 1 + F(n / 2);
    } 
    else {
        return 1 + F(n / 3);
    }
}

int main() {
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}

