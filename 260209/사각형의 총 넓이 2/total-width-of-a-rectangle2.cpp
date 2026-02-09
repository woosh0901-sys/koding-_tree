#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int grid[201][201] = {0,};

int main() {
    cin >> N;

    int offset = 100;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        
        int start_x = x1[i] + offset;
        int start_y = y1[i] + offset;
        int end_x = x2[i] + offset;
        int end_y = y2[i] + offset;

        for (int x = start_x; x < end_x; x++) {
            for (int y = start_y; y < end_y; y++) {
                grid[x][y] = 1;
            }
        }
    }

    int total_area = 0;
    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            if (grid[i][j] == 1) {
                total_area++;
            }
        }
    }

    cout << total_area;

    return 0;
}