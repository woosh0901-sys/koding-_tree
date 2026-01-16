#include <iostream>
using namespace std;

void printPower(int a, int b) {
    long long result = 1;
    
    for(int i = 0; i < b; i++) {
        result *= a;
    }
    
    cout << result;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    printPower(a, b);
    
    return 0;
}