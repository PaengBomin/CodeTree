#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

class Scores {
    private:
        string name;
        int eng;
        int math;
        int kor;
    public:
        Scores(string name,int kor,int eng,int math){
            this->name=name;
            this->eng=eng;
            this->math=math;
            this->kor=kor;
        }
        Scores() { return name,kor,eng,math; }
        void print() const {
            cout << name << " " << kor << " " << eng << " " << math << endl;
        }
        void getName() const { return name; }
        void getName() const { return name; }
};

bool compare(int kor,int eng,int math) {
    assert(kor)
}

int main() {
    int n;
    cin >> n;
    cin.ignored();

    for (int i = 0; i < n; i++) {
    }

    return 0;
}