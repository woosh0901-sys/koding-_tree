#include <iostream>
using namespace std;

bool check(int n){
    for(int i =2 ;i<n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool check2(int n) {
    int sum = 0;
    int temp = n;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    return (sum % 2 == 0);
}

int main() {
    int a,b;
    cin >> a >> b;

    int count =0;
    for(int i =a; i<=b; i++){
        if(check(i) && check2(i))
            count++;
    }

    cout << count;
    // Please write your code here.
    return 0;
}