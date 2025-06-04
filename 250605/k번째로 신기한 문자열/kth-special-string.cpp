#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cin >> t;
    vector<string> newstr;

    sort(str,str+n);

    for (int i=0;i<n;i++) {
        if (str[i].substr(0,2)=="ap") { 
            newstr.push_back(str[i]);
        }
    }

    cout << newstr[k-1] << endl;

    return 0;
}