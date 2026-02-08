#include <iostream>
#include <string>
using namespace std;

int n;
int x[1000];
char dir[1000];

int white_cnt[2001];
int black_cnt[2001];
int tile_color[2001];

int loc = 1000;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];

        for(int j = 0; j < x[i]; j++){
           if (tile_color[loc] != 3) {
                if (dir[i] == 'R') {
                    tile_color[loc] = 2;
                    black_cnt[loc]++;
                } else {
                    tile_color[loc] = 1;
                    white_cnt[loc]++;
                }
                if (white_cnt[loc] >= 2 && black_cnt[loc] >= 2) {
                    tile_color[loc] = 3;
                }
            }
            if (j < x[i] - 1) {
                if (dir[i] == 'R') loc++;
                else loc--;
            }
        }
    }

    int cnt_w =0,cnt_b =0 ,cnt_g =0;
    for (int i = 0; i < 2001; i++) {
        if (tile_color[i] == 1) cnt_w++;
        else if (tile_color[i] == 2) cnt_b++;
        else if (tile_color[i] == 3) cnt_g++;
    }
    cout << cnt_w << " " << cnt_b << " " << cnt_g;

    return 0;
}