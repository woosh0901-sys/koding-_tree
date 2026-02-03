#include <iostream>
#include <algorithm>

using namespace std;

class Check{
public:
    int ans,idx;
    
    Check(){};
    Check(int ans,int idx){
        this->ans = ans;
        this->idx = idx;
    }
};

bool sp(const Check& a,const Check& b){
    if(a.ans == b.ans){
        return a.idx < b.idx;
    }
    else return a.ans < b.ans;
}
int N;
int sequence[1000];

int main() {
    cin >> N;
    
    Check check1[1000];
    
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        check1[i] = Check(sequence[i],i+1);
    }

    sort(check1,check1+N,sp);

    int result[1000];

    for(int i=0;i<N;i++){
        result[check1[i].idx] = i + 1;
    }
    
    for(int i=1;i<=N;i++){
        cout << result[i] << " ";
    }

    // Please write your code here.

    return 0;
}
