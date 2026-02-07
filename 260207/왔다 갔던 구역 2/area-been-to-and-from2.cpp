#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;

    int ans[201] = {0,};
    int loc = 100;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];

        for(int j = 0; j < x[i]; j++){
            if(dir[i] == 'R'){
                ans[loc]++;
                loc++;
            }
            else if(dir[i] == 'L'){
                loc--; 
                ans[loc]++;
            }
        }
    }
    
    int cnt = 0;
   
    for(int i = 0; i < 201; i++){
        if(ans[i] >= 2) cnt++;
    }

    cout << cnt;

    return 0;
}