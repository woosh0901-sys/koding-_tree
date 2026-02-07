#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    for(int i = 0; i < n; i++){
        if(x1[i] || x2[i] < 0) {
            if(x1[i] < x2[i]){
                x1[i] += -1 * x1[i];
                x2[i] += -1 * x1[i];
            }
            else{
                x1[i] += -1 * x2[i];
                x2[i] += -1 * x2[i];
            }
        }
    }

    int ans[101] = {0,};
    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j < x2[i] -1; j++){
            ans[j]++;
        }
    }

    int max = ans[0];
    for(int i = 1; i<= n; i++){
        if(ans[i] > max) max = ans[i];
    }

    cout << max;
    
    return 0;
}