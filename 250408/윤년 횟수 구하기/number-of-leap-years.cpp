#include <iostream>
using namespace std;

int main() {
    int n,yoon=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%4==0){
            if(i%100==0 && i%400!=0)
            continue;
            yoon++;
        }   
    }
    cout << yoon;

    return 0;
}