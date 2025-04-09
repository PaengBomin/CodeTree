#include <iostream>
using namespace std;

int fact(int N){
    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    cout << fact(N) << endl;

    return 0;
}