#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;
    int ans[100] = {0,};
    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        for(int j = A[i]; j<=B[i]; j++){
            ans[j]++;
        }
    }

    int max = ans[0];
    for(int i =1; i<=N;i++){
        if(ans[i] > max) max = ans[i];
    }

    cout << max;
    return 0;
}