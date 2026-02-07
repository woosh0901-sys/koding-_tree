#include <iostream>
#include <algorithm>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    int ans[100] = {0,};
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        for (int j = x1[i]; j <= x2[i]; j++) {
            ans[j]++;
        }
    }

    int max = *max_element(ans,ans+100);
    cout << max;
    // Please write your code here.

    return 0;
}