#include <iostream>
using namespace std;

int n;
int arr[100];

int Max(int idx) {
    if (idx == 0) return arr[0]; // base case: 배열 첫 번째 값
    int temp = Max(idx - 1);     // 이전 값과 비교
    return (arr[idx] > temp) ? arr[idx] : temp;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // 배열을 먼저 입력
    }

    cout << Max(n - 1) << endl;

    return 0;
}
