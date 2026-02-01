#include <iostream>
#include <algorithm>
using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }
    sort(nums,nums+2*N);
    int max_sum = 0;
    for(int i=0;i<2*N;i++){
        if(nums[i] + nums[2*N-i-1] > max_sum)
            max_sum = nums[i] + nums[2*N-i-1];
    }
    cout << max_sum;
    // Please write your code here.

    return 0;
}
