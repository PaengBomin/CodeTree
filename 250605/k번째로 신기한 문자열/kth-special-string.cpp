#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    vector<string> newstr;

    sort(str, str + n);

    for (int i = 0; i < n; i++) {
        if (str[i].size() >= t.size() && str[i].substr(0, t.size()) == t) {
            newstr.push_back(str[i]);
        }
    }

    if (k <= newstr.size()) {
        cout << newstr[k - 1] << endl;
    }

    return 0;
}