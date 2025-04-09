#include <iostream>

using namespace std;

int N;

int allsum(int N){
    if (N < 10)
        return N * N;  // 한 자리 수일 경우 제곱해서 반환

    int digit = N % 10; // 일의 자리
    return digit * digit + allsum(N / 10); // 제곱 + 재귀적으로 다음 자리
}


int main() {
    cin >> N;

    cout << allsum(N);

    return 0;
}