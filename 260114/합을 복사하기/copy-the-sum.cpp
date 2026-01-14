#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int sum =0;
    sum += a;
    sum += b;
    sum += c;
    a = sum ,b =sum , c =sum;
    cout << a << " " << b << " " << c;
    // Please write your code here.
    return 0;
}