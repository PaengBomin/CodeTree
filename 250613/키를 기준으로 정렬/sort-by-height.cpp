#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

class Student {
    private:
        string name;
        int h;
        int w;
    public:
        Student(string name,int h, int w) {
            this->name=name;
            this->h=h;
            this->w=w;
        }
        void print() const {
            cout << name << " " << h << " " << w << endl;
        }
        string getName() const { return name; }
        int getH() const { return h; }
        int getW() const { return w; }
};

bool compare(const Student& a, const Student& b) {
    return a.getH() < b.getH();
}

int main() {
    vector<Student> line;
    int n;
    cin >> n;
    cin.ignore();

    for (int i=0;i<n;i++) {
        string temp;
        getline(cin,temp);
        
        string name;
        int h,w;
        istringstream iss(temp);
        iss >> name >> h >> w;

        line.emplace_back(name,h,w);
    }

    sort(line.begin(),line.end(),compare);

    for (const Student& s : line) {
        s.print();
    }
}