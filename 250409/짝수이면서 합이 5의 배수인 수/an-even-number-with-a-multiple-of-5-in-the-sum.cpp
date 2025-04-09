#include <iostream>

using namespace std;

bool num(int n){
    int sip,eil,sum;
    sip=n/10;
    eil=n%10;
    sum=sip+eil;
    return (n%2==0 && sum%5==0);
}

int main() {
    int n;
    cin >> n;

    if(num(n)){
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}