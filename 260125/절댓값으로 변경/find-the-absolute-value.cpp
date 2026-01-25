#include <iostream>
using namespace std;
void asd(int n){
    if(n < 0){
        n = n * -1;
    }
    cout << n << " ";
}
int main() {
    int n;
    cin >> n;
    int k;
    for(int i =0; i<n; i++){
        cin >> k;
        asd(k);
    }
    // Please write your code here.
    return 0;
}