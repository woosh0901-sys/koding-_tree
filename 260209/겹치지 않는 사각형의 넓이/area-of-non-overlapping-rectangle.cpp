#include <iostream>

using namespace std;

int grid[2005][2005] = {0,}; 
int x1[3], y1[3];
int x2[3], y2[3];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    int offset = 1000;

    for(int i = 0; i < 2; i++){
        for(int x = x1[i] + offset; x < x2[i] + offset; x++) {
            for(int y = y1[i] + offset; y < y2[i] + offset; y++) {
                grid[x][y] = 1;
            }
        }
    }

    for(int x = x1[2] + offset; x < x2[2] + offset; x++) {
        for(int y = y1[2] + offset; y < y2[2] + offset; y++) {
            grid[x][y] = 0;
        }
    }

    int ans = 0;
    for(int i = 0; i < 2005; i++) {
        for(int j = 0; j < 2005; j++) {
            if(grid[i][j] == 1) ans++;
        }
    }

    cout << ans;

    return 0;
}