#include <iostream>
#include <algorithm>
using namespace std;
class Student{
public:
    int h,w,n;

    Student(){};
    Student(int h, int w, int n){
        this->h = h;
        this->w = w;
        this->n = n;
    }
};
bool scp(const Student& a, const Student& b){
    if(a.h == b. h){
        if(a.w==b.w){
            return a.n < b.n;
        }
        else return a.w > b.w;
    }
    else return a.h > b.h;
}

int N;
int h[1000];
int w[1000];

int main() {
    cin >> N;
    Student Students[1000];

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        Students[i] = Student(h[i],w[i],i+1);
    }

    sort(Students,Students+N,scp);
    for(int i =0; i<N; i++){
        cout << Students[i].h << " " << Students[i].w << " " << Students[i].n << "\n";
    }
    // Please write your code here.

    return 0;
}
