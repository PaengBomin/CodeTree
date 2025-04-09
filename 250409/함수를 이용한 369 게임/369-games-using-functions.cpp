#include <iostream>
#include <string>
using namespace std;

int a, b;

bool has369(int n) {
    string s = to_string(n);
    for (char c : s) {
        if (c == '3' || c == '6' || c == '9')
            return true;
    }
    return false;
}

int game(int a, int b){
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 || has369(i)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    cin >> a >> b;
    cout << game(a, b);
    return 0;
}
