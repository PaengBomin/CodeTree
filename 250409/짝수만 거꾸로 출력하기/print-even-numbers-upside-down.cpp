#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num[n];

    for(int i = n - 1; i >= 0; i--) {
        cin >> num[i];
    }

    for(int j = 0; j < n; j++) {
        if(num[j] % 2 == 0) {
            cout << num[j] << " ";
        }
    }

    return 0;
}