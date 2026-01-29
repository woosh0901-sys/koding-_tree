#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> sum(n);

    for (int i = 0; i < n; i++) {
        cin >> sum[i];
    }

    int a1, a2, sum1 = 0;
    for (int i = 0;i < m;i++) {
        cin >> a1 >> a2;
        for (int i = a1-1; i < a2; i++) {
            sum1 += sum[i];
        }
        cout << sum1 << "\n";

        sum1 = 0;
    }
    // Please write your code here.
    return 0;
}