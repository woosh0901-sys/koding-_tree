#include <iostream>
#include <string>

using namespace std;

class User{
public:
    string id;
    int level;

    User(string id = "codetree",int level = 10){
        this->id = id;
        this->level = level;
    }
};


int main() {
    string user2_id;
    int user2_level;

    User user1 = User();
    cout << "user " << user1.id << " lv " << user1.level<<"\n";

    cin >> user2_id >> user2_level;
    User user2 = User(user2_id, user2_level);

    cout << "user " << user2.id << " lv " << user2.level;
    // Please write your code here.

    return 0;
}