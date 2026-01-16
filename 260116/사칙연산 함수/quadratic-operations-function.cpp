#include <iostream>
using namespace std;
void cal(int a, char b, int c){
    if(b == '+') cout << a << " + " << c <<  " = " << a + c;
    else if(b == '-') cout << a << " - " << c << " = " << a - c;
    else if(b == '/') cout << a << " / " << c <<" = " << a / c;
    else if(b == '*') cout << a << " * " << c <<" = " << a * c;
    else cout << "False";
}

int main() {
    int a,c;
    char b;
    cin >> a >> b >> c;
    cal(a,b,c);
    // Please write your code here.
    return 0;
}