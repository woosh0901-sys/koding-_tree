#include <iostream>

#define MAX_N 5

using namespace std;
class Person{
public:
    char name;
    int score;

    Person() {}
    
    Person(char name,int score){
        this->name = name;
        this->score = score;
    }
};

int main() {
    char codename[MAX_N];
    int score[MAX_N];
    
    Person person1[MAX_N];

    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
        person1[i] = Person(codename[i],score[i]);
    }

    int min_idx = 0;
    for(int i =1; i<MAX_N;i++){
        if(person1[i].score<person1[min_idx].score){
            min_idx = i;
        }
    }

    cout << person1[min_idx].name << " " << person1[min_idx].score;
    // Please write your code here.

    return 0;
}
