#include <iostream>
using namespace std;

int n;
int arr[100000];
int tmp[100000];

void merge(int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    int k = start;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++];
    }

    while (i <= mid) tmp[k++] = arr[i++];
    while (j <= end) tmp[k++] = arr[j++];

    for (int i = start; i <= end; i++) {
        arr[i] = tmp[i];
    }
}

void mergeSort(int start, int end) {
    if (start >= end) return;
    int mid = (start + end) / 2;
    mergeSort(start, mid);
    mergeSort(mid + 1, end);
    merge(start, mid, end);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    mergeSort(0, n - 1);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
