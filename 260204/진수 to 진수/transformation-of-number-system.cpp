#include <iostream>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    int num =0;
    for(int i = 0; i< n.size(); i++){
        num = num * a + (n[i] - '0');
    }

    int digit[20] = {};
    int cnt =0;

    while(true){
        if(num < b){
            digit[cnt++] = num;
            break;
        }
        digit[cnt++] = num % b;
        num /= b;
    }

    for(int i = cnt -1; i>=0; i--){
        cout << digit[i];
    }    
    return 0;
}