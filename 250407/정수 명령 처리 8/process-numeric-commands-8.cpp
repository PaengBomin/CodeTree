#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    deque<int> dq;
    string command;
    int x;

    for (int i = 0; i < N; i++) {
        cin >> command;

        if (command == "push_front") {
            cin >> x;
            dq.push_front(x);
        } else if (command == "push_back") {
            cin >> x;
            dq.push_back(x);
        } else if (command == "pop_front") {
            if (dq.empty()) cout << -1 << '\n';
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else if (command == "pop_back") {
            if (dq.empty()) cout << -1 << '\n';
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else if (command == "size") {
            cout << dq.size() << '\n';
        } else if (command == "empty") {
            cout << (dq.empty() ? 1 : 0) << '\n';
        } else if (command == "front") {
            if (dq.empty()) cout << -1 << '\n';
            else cout << dq.front() << '\n';
        } else if (command == "back") {
            if (dq.empty()) cout << -1 << '\n';
            else cout << dq.back() << '\n';
        }
    }

    return 0;
}
