#include <iostream>
using namespace std;

int a,b;

// 소수인지 판별하는 함수
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// a~b 사이의 모든 소수의 합 계산
int sosu(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    cin >> a >> b;
    cout << sosu(a, b);
    return 0;
}
