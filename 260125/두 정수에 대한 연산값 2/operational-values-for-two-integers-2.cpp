#include <iostream>
using namespace std;
int aasd(int &a, int &b){
    if(a<b){
        a += 10;
        b *= 2;
    }
    else{
        b += 10;
        a *= 2;
    }
   return a,b;
}
int main() {
    int a,b;
    cin >> a >> b;
    aasd(a,b);
    cout << a << " " << b;

    // Please write your code here.
    return 0;
}