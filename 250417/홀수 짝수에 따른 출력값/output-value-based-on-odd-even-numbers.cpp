#include <iostream>
using namespace std;

int sumprint(int n) {
    if (n <= 0) return 0;

    if (n % 2 == 0) {
        // 짝수면 짝수만 더하기
        return n + sumprint(n - 2);
    } else {
        // 홀수면 홀수만 더하기
        return n + sumprint(n - 2);
    }
}

int main() {
    int N;
    cin >> N;

    cout << sumprint(N) << endl;

    return 0;
}
