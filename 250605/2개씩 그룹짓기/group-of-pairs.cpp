#include <iostream>
#include <algorithm>
using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums+2*N);
    int man = 2;
    for (int i = 0; i < N; i++) {
        if (man < nums[i] + nums[2*N-1-i]) {
            man = nums[i] + nums[2*N-1-i];
        }
    }
    cout << man;

    return 0;
}
