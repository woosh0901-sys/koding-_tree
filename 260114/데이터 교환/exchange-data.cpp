#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp,temp1,temp2;
    temp = a;
    temp1 = c;
    temp2 = b;
    a = temp1;
    b = temp;
    c = temp2;
    cout << a << "\n" << b  << "\n" << c;
    // Please write your code here.
    return 0;
}