#include <iostream>
#include <string>
using namespace std;

bool check(string a) {
    char s = a[0];
    int count = 0;
    
    for(int i = 1; i < a.length(); i++) {
        if(a[i] != s) {
            count++;
        }
    }
    
    if(count >= 1) { 
        return true; 
    } else {
        return false;
    }
}

int main() {
    string a;
    cin >> a;
    if(!check(a)) cout << "No";
    else cout << "Yes";
    return 0;
}