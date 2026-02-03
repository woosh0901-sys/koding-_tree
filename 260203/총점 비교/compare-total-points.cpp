#include <iostream>
#include <algorithm>
using namespace std;
class Student{
public:
    string name;
    int sc1,sc2,sc3;

    Student(){};
    Student(string name,int sc1,int sc2,int sc3){
        this->name = name;
        this->sc1 = sc1;
        this->sc2 = sc2;
        this->sc3 = sc3;
    }
};

bool scp(Student a, Student b){
    return a.sc1 + a.sc2 + a.sc3 < b.sc1 + b.sc2 + b.sc3;
}

int n;
string name[10];
int sc1[10];
int sc2[10];
int sc3[10];

int main() {
    cin >> n;

    Student students[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> sc1[i];
        cin >> sc2[i];
        cin >> sc3[i];
        students[i] = Student(name[i],sc1[i],sc2[i],sc3[i]);
    }

    sort(students,students+n,scp);

    for(int i = 0; i< n; i++){
        cout << students[i].name << " " << students[i].sc1 << " " << students[i].sc2 << " " << students[i].sc3 << "\n";
    }
    // Please write your code here.

    return 0;
}