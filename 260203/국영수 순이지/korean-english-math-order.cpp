#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student {
    public:
	string name;
    int korean, english,math;
    
    Student(){};
    Student(string name, int korean, int english,int math) {
        this->name = name;
        this->korean = korean;
        this->english = english;
        this->math = math;
        }
};

bool cmp(Student a, Student b){
    if(a.korean == b.korean){
        if(a.english == b.english) return a.math > b.math;
        else return a.english > b.english;
    }
    else return a.korean > b.korean;
}

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

int main() {
    cin >> n;

    Student students[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
        students[i] = Student(name[i],korean[i],english[i],math[i]);
    }

    sort(students,students+n,cmp);

    for(int i = 0; i < n; i++)
        cout << students[i].name << " " << students[i].korean << " " << students[i].english << " " << students[i].math << endl;

    // Please write your code here.

    return 0;
}