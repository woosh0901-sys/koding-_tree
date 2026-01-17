#include <iostream>
#include <vector>
using namespace std;
void check(vector<int>& a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] /= 2;
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }
    check(a);

    for (int i=0; i< n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}