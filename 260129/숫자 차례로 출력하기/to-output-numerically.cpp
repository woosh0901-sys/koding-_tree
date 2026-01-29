#include <iostream>
using namespace std;

void check(int n) {
    if (n == 0) return;

    check(n - 1); 
    cout << n << " ";
}


void check1(int n) {
    if (n == 0) return;

    cout << n << " ";
    check1(n - 1);
}

int main() {
    int n;
    cin >> n;

    check(n);
    cout << "\n";
    check1(n);

    return 0;
}