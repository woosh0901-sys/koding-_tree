#include <iostream>
using namespace std;

int check(int a, int b) {
    int count = 0;
    while (a <= b) {
        int current = b;
        while (current > 0) {
            int digit = current % 10;     
            if (digit == 3 || digit == 6 || digit == 9) {
                count++;
                cout << current << "\n";
            }
            current /= 10;
        }
        b--;
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << check(a, b) + 1;
    return 0;
}