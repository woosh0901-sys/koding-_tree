#include <iostream>
using namespace std;

int min(int a, int b, int c){
    if(a <b && a<c) return a;
    if(b<a && b <c ) return b;
    if(c<a && c<b) return c;
}

int main() {
    int a,b,c;
    cin >> a>> b>> c;
    cout << min(a,b,c);
    // Please write your code here.
    return 0;
}