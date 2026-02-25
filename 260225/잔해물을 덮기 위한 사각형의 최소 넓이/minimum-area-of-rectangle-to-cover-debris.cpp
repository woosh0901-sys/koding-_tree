#include <iostream>
#include <algorithm>

using namespace std;

int grid[2001][2001];

int main() {
    int x1, y1, x2, y2;
    int offset = 1000;

    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1 + offset; i < x2 + offset; i++) {
        for(int j = y1 + offset; j < y2 + offset; j++) {
            grid[i][j] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1 + offset; i < x2 + offset; i++) {
        for(int j = y1 + offset; j < y2 + offset; j++) {
            grid[i][j] = 0;
        }
    }

    int min_x = 2001, max_x = -1, min_y = 2001, max_y = -1;
    bool found = false;

    for(int i = 0; i <= 2000; i++) {
        for(int j = 0; j <= 2000; j++) {
            if(grid[i][j] == 1) {
                found = true;
                if(i < min_x) min_x = i;
                if(i > max_x) max_x = i;
                if(j < min_y) min_y = j;
                if(j > max_y) max_y = j;
            }
        }
    }

    if(!found) cout << 0;
    else {
        cout << (max_x - min_x + 1) * (max_y - min_y + 1);
    }

    return 0;
}