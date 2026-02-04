#include <iostream>

using namespace std;
int n, B;

int main() {
    cin >> n >> B;

    int digit[20] = {};
    int digit1[20] = {};

    int cnt =0;
    int cnt1=0;

    if(B == 4){
        while (true) {
            if(n < 4) {
                digit[cnt++] = n;
                break;
            }
        digit[cnt++] = n % 4;
        n /= 4;
    }

    for(int i = cnt - 1; i >= 0; i--)
        cout << digit[i];
    }
    
    if(B == 8){
        while (true) {
            if(n < 8) {
                digit1[cnt1++] = n;
                break;
            }
        digit1[cnt1++] = n % 8;
        n /= 8;
    }

    for(int i = cnt1 - 1; i >= 0; i--)
        cout << digit1[i];
    }
    return 0;
}