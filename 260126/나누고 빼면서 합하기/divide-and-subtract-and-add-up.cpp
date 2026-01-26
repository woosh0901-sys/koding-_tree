#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> a, int m) {
    int total = 0;
    while (true) {
        total += a[m - 1];
        
        if (m == 1) break;

        if (m % 2 == 0) m /= 2;
        else m -= 1;
    }
    return total;
}


int main() {
    int m,n;
    cin >> n >> m;
    vector<int> a(n);
    for(int i =0;i<a.size(); i++){
        cin >> a[i];
    }
    cout << sum(a, m);
    // Please write your code here.
    return 0;
}
