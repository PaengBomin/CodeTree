#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

class Person {
    private:
        string name,add,city;
    public:
        Person(string name,string add,string city) {
            this->name=name;
            this->add=add;
            this->city=city;
        }
        void print_Person() {
            cout << "name " << name << endl;
            cout << "addr " << add << endl;
            cout << "city " << city << endl;
        }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string name,add,city;
    vector<string> line;

    for (int i=0;i<n;i++) {
        string temp;
        getline(cin,temp);
        line.push_back(temp);
    }

    sort(line.begin(),line.end());

    istringstream newline(line[n-1]);
    newline >> name >> add >> city;

    Person peple(name,add,city);

    peple.print_Person();

    return 0;
}