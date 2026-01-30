#include <iostream>
using namespace std;

int sum_digits(int n) {
    if (n == 0) {
        return 0;
    }
    
    return (n % 10) + sum_digits(n / 10);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    long long total_product = (long long)a * b * c; 

    cout << sum_digits(total_product);

    return 0;
}