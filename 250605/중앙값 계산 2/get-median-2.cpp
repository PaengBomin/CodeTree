#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> data;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        data.push_back(x);

        if (data.size() % 2 == 1) {
            vector<int> temp = data;
            sort(temp.begin(), temp.end());

            int median = temp[temp.size() / 2];
            cout << median << " ";
        }
    }

    return 0;
}