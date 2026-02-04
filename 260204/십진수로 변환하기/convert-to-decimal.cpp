#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cin >> binary;

    int sum = 0;
    for(int i =0; i < binary.size(); i++){
        sum = sum * 2 + (binary[i] - '0');
    }

    cout << sum;
    return 0;
}