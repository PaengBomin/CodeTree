#include <iostream>
#include <deque>
#include <string>

using namespace std;

int n;
deque<int> q;  

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if(command == "push_front") {
            int x;
            cin >> x;
            q.push_front(x);
        }
        else if(command == "push_back") {
            int x;
            cin >> x;
            q.push_back(x);
        }
        else if(command == "pop_front") {
            int v = q.front();
            q.pop_front();
            cout << v << endl;
        }
        else if(command == "pop_back") {
            int v = q.back();
            q.pop_back();
            cout << v << endl;
        }
        else if(command == "size") {
            cout << q.size() << endl;
        }
        else if(command == "empty") {
            if(q.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if(command == "front") {
            cout << q.front() << endl;
        }
        else {
            cout << q.back() << endl;
        }
    }
    return 0;
}
