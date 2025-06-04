#include <iostream>
#include <string>
using namespace std;

class Secret {
public:
    string secret_code;
    char meeting_point;
    int time;

    void print_secret() {
        cout << "secret code : " << secret_code << endl;
        cout << "meeting point : " << meeting_point << endl;
        cout << "time : " << time << endl;
    }
};

int main() {
    Secret secret_1;

    cin >> secret_1.secret_code >> secret_1.meeting_point >> secret_1.time;

    secret_1.print_secret();

    return 0;
}