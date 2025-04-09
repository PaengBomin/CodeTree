#include <iostream>
using namespace std; 

int n;

int smallnum(int n){
    int cnt=0;
    if(n==1)
        return cnt;
    if(n%2==0){
        return 1+smallnum(n/2);
    }
    else
        return 1+smallnum(n/3);
}

int main(){
    cin >> n;

    cout << smallnum(n);

    return 0;
}