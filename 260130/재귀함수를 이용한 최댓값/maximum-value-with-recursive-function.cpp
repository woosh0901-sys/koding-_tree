#include <iostream>

using namespace std;
int max(int arr[], int idx){
    if(idx == 0) return arr[0];  
    int sub_max = max(arr,idx -1); 
    if(arr[idx] > sub_max) return arr[idx];
    else return sub_max;
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i =0; i<n; ++i) cin >> arr[i];
    cout << max(arr,n-1);
     // Please write your code here.
    return 0;
}