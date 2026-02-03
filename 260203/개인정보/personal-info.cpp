#include <iostream>
#include <algorithm>

using namespace std;
class People{
public:
    string name;
    int height;
    double weight;

    People(){};
    People(string name,int height,double weight){
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};
bool scp(const People& a,const People& b){
    return a.name < b.name;
}

bool scp1(const People& a,const People& b){
    return a.height > b.height;
}
string name[5];
int height[5];
double weight[5];

int main() {
    People Peoples[5];

    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        Peoples[i] = People(name[i],height[i],weight[i]);
    }
    cout << "name" << "\n";
    sort(Peoples,Peoples+5,scp);

    for (int i = 0; i < 5; i++) {
        cout << Peoples[i].name << " " <<  Peoples[i].height << " " << Peoples[i].weight<< "\n";
    }

    sort(Peoples,Peoples+5,scp1);
    cout <<"\n" << "height" << "\n";
    for (int i = 0; i < 5; i++) {
        cout << Peoples[i].name << " " <<  Peoples[i].height << " " << Peoples[i].weight<< "\n";
    }
    
    // Please write your code here.

    return 0;
}