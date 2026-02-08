#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

int tile_color[200001];
int loc = 100000;
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        for(int j  = 0; j < x[i]; j++){
            if(dir[i] == 'R'){
                tile_color[loc] = 1;
                if (j < x[i] - 1) loc++;
            }
            else{
                tile_color[loc] = 2;
                if (j < x[i] - 1) loc--;
            }
        }
    }

    int cnt_b =0,cnt_w=0;

    for(int i = 0; i<200001;i++){
        if(tile_color[i] == 1) cnt_b++;
        else if(tile_color[i] == 2) cnt_w++;
    }
    cout << cnt_w << " " << cnt_b;

    return 0;
}