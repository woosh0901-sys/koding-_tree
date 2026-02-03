#include <iostream>
#include <algorithm>

using namespace std;
class Point{
public:
    int x,y,number;
    
    Point(){};
    Point(int x,int y,int number){
        this->x = x;
        this->y = y;
        this->number = number;
    }
};

bool check(const Point& a, const Point& b) {
    int distA_x = (a.x < 0) ? -a.x : a.x;
    int distA_y = (a.y < 0) ? -a.y : a.y;
    int distA = distA_x + distA_y;

    int distB_x = (b.x < 0) ? -b.x : b.x;
    int distB_y = (b.y < 0) ? -b.y : b.y;
    int distB = distB_x + distB_y;

    if (distA != distB) {
        return distA < distB;
    }

    return a.number < b.number;
}

int N;
int x[1000];
int y[1000];

int main() {
    cin >> N;

    Point points[1000];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        points[i] = Point(x[i],y[i],i+1);
    }

    sort(points,points+N,check);

    for(int i =0; i<N; i++){
        cout << points[i].number << "\n";
    }

    // Please write your code here.

    return 0;
}
