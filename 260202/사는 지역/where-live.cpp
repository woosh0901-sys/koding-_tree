#include <iostream>
#include <string>
#include <algorithm>
#define MAX_N 10

using namespace std;

class Person{
public:
    string name;
    string number;
    string region;

    Person() {}
    Person(string name,string number,string region){
        this->name = name;
        this->number = number;
        this->region = region;
    }
};

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

int main() {
    cin >> n;
    Person person1[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];
        person1[i] = Person(name[i],street_address[i],region[i]); 
    }

    int idx = 0;
    for(int i =1; i< n;i++){
        if(person1[idx].name < person[i].name){
            idx = i;
        }
    }

    cout << "name " << person[idx].name << "\n";
    cout << "addr " << person[idx].number << "\n";
    cout << "city " << person[idx].region;
    // Please write your code here.

    return 0;
}