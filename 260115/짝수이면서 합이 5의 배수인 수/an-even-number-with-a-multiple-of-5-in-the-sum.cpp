#include <iostream>
using namespace std;
void odd_sum(int n){
    if((n % 2) == 0 && ((n / 10) + (n % 10)) % 5 == 0) cout << "Yes";
    else cout << "No";
}

int main() {
    int n;
    cin >> n;
    odd_sum(n);
    // Please write your code here.
    return 0;
}