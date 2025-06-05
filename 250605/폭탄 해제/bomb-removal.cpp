#include <iostream>
#include <string>

using namespace std;

class Pong {
private:
    string unlock_code;
    char wire_color;
    int seconds;
public:
    Pong(string code, char color, int time) {
        unlock_code=code;
        wire_color=color;
        seconds=time;
    }
    void printPong() {
        cout << "code : " << unlock_code << endl;
        cout << "color : " << wire_color << endl;
        cout << "second : " << seconds << endl;
    }
};

int main() {
    string code;
    char color;
    int time;
    cin >> code >> color >> time;

    Pong pong1(code, color, time);
    pong1.printPong();

    return 0;
}