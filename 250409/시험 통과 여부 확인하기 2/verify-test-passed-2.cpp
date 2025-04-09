#include <iostream>
using namespace std;

int main() {
    int n,score,sum,avg=0,passnum=0;
    cin >> n;

    for(int j=0;j<n;j++){
        sum=0;
        
        for(int i=0;i<4;i++){
            cin >> score;
            sum+=score;
        }

        avg=sum/4;

        if(avg>=60){
            cout << "pass" << endl;
            passnum++;
        }
        else
            cout << "fail" << endl;
    }

    cout << passnum << endl;

    return 0;
}