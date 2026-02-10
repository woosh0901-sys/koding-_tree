#include <iostream>

using namespace std;

int N;
int x[100], y[100];
int grid[200][200];

int main() {
    cin >> N;
    
    int offset = 100;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        x[i] += offset;
        y[i] += offset;
    }

    for(int k = 0; k < N; k++) {
        for(int i = x[k]; i < x[k] + 8; i++) {
            for(int j = y[k]; j < y[k] + 8; j++) {
                grid[i][j] = 1; 
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++) {
            if(grid[i][j] == 1) ans++;
        }
    }

    cout << ans;

    return 0;
}