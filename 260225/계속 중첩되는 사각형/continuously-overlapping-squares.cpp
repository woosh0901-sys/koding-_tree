#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
int grid[201][201];

int main() {
    cin >> n;

    int offset = 100;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    for(int i = 0; i < n; i++){
        int color = (i % 2 == 0) ? 1 : 2; 

        for(int x = x1[i] + offset; x < x2[i] + offset; x++) {
            for(int y = y1[i] + offset; y < y2[i] + offset; y++) {
                grid[x][y] = color;
            }
        }
    }

    int count = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(grid[i][j] == 2){
                count++;
            }
        }
    }

    cout << count;
    return 0;
}