#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, k;
string t;
string str[100];
string ans[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    int count =0;
    for(int i=0;i<n; i++){
        bool check = true;
        for(int j =0; j< t.length();j++){
            if(str[i][j] != t[j]) {
                check = false;
                break;
            }
        }
        if(check){
            ans[count++] = str[i];
        }
    }

    sort(ans,ans+count);
    cout << ans[k-1];
    // Please write your code here.

    return 0;
}