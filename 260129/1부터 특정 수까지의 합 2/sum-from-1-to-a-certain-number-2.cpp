#include <iostream>
using namespace std;
int ans(int n){
    if(n == 1) return 1;
    return ans(n-1) + n;
}
int main() {
    int n;
    cin >> n;
    cout << ans(n);
    // Please write your code here.
    return 0;
}