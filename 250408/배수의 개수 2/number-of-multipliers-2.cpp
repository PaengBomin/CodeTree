#include <iostream>
using namespace std;

int main() {
    int n=10,num,k=0;
    for(int i=0;i<n;i++){
        cin >> num;
        if(num%2!=0)
            k++;
    }
    cout << k;

    return 0;
}