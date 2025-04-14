#include <iostream>
#define MAX_N 100
using namespace std;

int n;
int arr[MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 삽입 정렬
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // key보다 큰 값을 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // key를 적절한 위치에 삽입
        arr[j + 1] = key;
    }

    // 출력
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
