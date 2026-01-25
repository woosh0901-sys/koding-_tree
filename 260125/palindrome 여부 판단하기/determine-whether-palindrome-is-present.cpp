#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    string reversed = "";

    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i]; 
    }

    if (s == reversed) 
        return true;
     else 
        return false;
    
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}