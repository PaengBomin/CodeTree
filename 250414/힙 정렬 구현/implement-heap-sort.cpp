#include <iostream>
using namespace std;

int n;
int arr[100001];

// 최대 힙으로 만들기
void heapify(int i, int heapSize) {
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;

    if (left <= heapSize && arr[left] > arr[largest])
        largest = left;
    if (right <= heapSize && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(largest, heapSize);
    }
}

void heapSort() {
    // 1. 힙 만들기 (최대 힙)
    for (int i = n / 2; i >= 1; i--) {
        heapify(i, n);
    }

    // 2. 정렬
    for (int i = n; i >= 2; i--) {
        swap(arr[1], arr[i]);     // 루트와 마지막 원소 교환
        heapify(1, i - 1);        // 줄어든 힙 크기에 대해 다시 힙 정리
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i]; // 1-based 인덱스로 입력받음
    }

    heapSort();

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
