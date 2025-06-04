#include <iostream>
#include <string>
using namespace std;

class Game {
private:
    string user2_id;
    int user2_level;
public:
    Game(string user2_id = "codetree", int user2_level = 10) {
        this->user2_id = user2_id;
        this->user2_level = user2_level;
    }

    void print_info() {
        cout << "user " << user2_id << " lv " << user2_level << endl;
    }

    void set_user(string id, int level) {
        user2_id = id;
        user2_level = level;
    }
};

int main() {
    Game user1;

    user1.print_info();

    string new_id;
    int new_level;
    cin >> new_id >> new_level;

    user1.set_user(new_id, new_level);

    user1.print_info();

    return 0;
}