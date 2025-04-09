#include <iostream>

using namespace std;

int a, b;

int game(int a,int b){
    int sip,eil,cnt=0;
    for(int i=a;i<=b;i++){
        sip=i/10;
        eil=i%10;
        if(i%3==0 || sip%3==0 || eil%3==0)
            cnt++;
    }
    return cnt;
}

int main() {
    int cnt;
    cin >> a >> b;

    cout << game(a,b);

    return 0;
}