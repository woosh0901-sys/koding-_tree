#include <iostream>

using namespace std;

string N;

int main() {
    cin >> N;

    int num =0;
    for(int i =0; i<N.size();i++){
        num = num * 2 + (N[i] - '0');
    }

    num *= 17;

    int digit[20] = {};
    int cnt =0;
    while(true){
        if(num < 2){
            digit[cnt++] = num;
            break;
        }
        digit[cnt++] = num % 2;
        num /= 2;
    }

    for(int i = cnt -1; i >= 0; i--){
        cout << digit[i];
    }

    return 0;
}