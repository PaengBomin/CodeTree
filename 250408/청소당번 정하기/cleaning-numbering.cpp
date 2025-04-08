#include <iostream>
using namespace std;

int main() {
    int n,classroom=0,outroom=0,bathroom=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%12==0)
            bathroom++;
        else if(i%3==0)
            outroom++;
        else if(i%2==0)
            classroom++;
    }

    cout << classroom << " " << outroom << " " << bathroom;

    return 0;
}