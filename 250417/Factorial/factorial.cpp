#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1; // 종료 조건 (base case)
    return n * factorial(n - 1); // 재귀 호출
}

int main() {
    int N;
    cin >> N;

    cout << factorial(N) << endl;

    return 0;
}
