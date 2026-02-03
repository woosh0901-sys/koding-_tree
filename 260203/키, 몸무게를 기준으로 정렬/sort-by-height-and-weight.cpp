#include <iostream>
#include <algorithm>

using namespace std;
class People{
public:
    string name;
    int height;
    int weight;

    People(){};
    People(string name,int height,int weight){
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};
bool scp(const People& a,const People& b){
    if(a.height == b.height) return a.weight > b.weight;
    else return a.height < b.height;
}

int n;
string name[5];
int height[5];
int weight[5];

int main() {
    cin >> n;
    
    People Peoples[5];

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        Peoples[i] = People(name[i],height[i],weight[i]);
    }

    sort(Peoples,Peoples+n,scp);

    for (int i = 0; i < n; i++) {
        cout << Peoples[i].name << " " <<  Peoples[i].height << " " << Peoples[i].weight<< "\n";
    }
    // Please write your code here.

    return 0;
}