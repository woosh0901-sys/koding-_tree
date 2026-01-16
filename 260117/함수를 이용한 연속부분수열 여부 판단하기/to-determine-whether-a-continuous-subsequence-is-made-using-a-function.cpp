#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++) {
        bool match = true;

        for (int j = 0; j < b.size(); j++) {
            if (a[i + j] != b[j]) {
                match = false;
                break;
            }
        }

        if (match == true) return true;
    }

    return false;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1);
    vector<int> b(n2);
    for (int i = 0;i < a.size(); i++) {
		cin >> a[i];
    }
    for (int i = 0;i < b.size(); i++) {
        cin >> b[i];
    }
    
    if (check(a, b)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
	}
    
    return 0;
}