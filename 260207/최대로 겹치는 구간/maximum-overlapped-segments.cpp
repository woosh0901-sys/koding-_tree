#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    int ans[201] = {0,};

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        x1[i] += 100;
        x2[i] += 100;

        for (int j = x1[i]; j < x2[i]; j++) {
            ans[j]++;
        }
    }

    int max = ans[0];
    for(int i = 0; i<= 200; i++){
        if(ans[i] > max) max = ans[i];
    }

    cout << max;
    
    return 0;
}