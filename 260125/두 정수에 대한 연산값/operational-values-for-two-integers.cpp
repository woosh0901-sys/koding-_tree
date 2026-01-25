#include <iostream>
using namespace std;
int sum(int &a, int &b){
    if(a<b){
        a = a * 2;
        b = b + 25;
    }
    else{
        b = b * 2;
        a = a + 25;
    }
    return a, b;
}
int main() {
    int a,b;
    cin >> a>>b;
    sum(a,b);
    cout << a << " " << b;
    // Please write your code here.
    return 0;
}