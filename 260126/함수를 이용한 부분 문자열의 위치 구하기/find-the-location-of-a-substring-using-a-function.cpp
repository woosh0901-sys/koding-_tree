#include <iostream>
#include <string>
using namespace std;
int check(string m,string n){
    for (int i = 0; i <= m.length() - n.length(); i++) {
    bool is_match = true;
    
    for (int j = 0; j < n.length(); j++) {
        if (m[i + j] != n[j]) { 
            is_match = false;
            break;
        }
    }
    
    if (is_match) { 
        return i;
    }
}
return -1;
}
int main() {
    string m,n;
    cin >> m >> n;
    cout << check(m,n);
    // Please write your code here.
    return 0;
}