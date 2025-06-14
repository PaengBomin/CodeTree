#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

class Scores {
    private:
        string name;
        int kor;
        int eng;
        int math;
    public:
        Scores(string name,int kor,int eng,int math){
            this->name=name;
            this->kor=kor;
            this->eng=eng;
            this->math=math;
        }
        void print() const {
            cout << name << " " << kor << " " << eng << " " << math << endl;
        }
        string getName() const { return name; }
        int getKor() const { return kor; }
        int getEng() const { return eng; }
        int getMath() const { return math; }
};

bool compare(const Scores& a, const Scores& b) {
    if (a.getKor() != b.getKor())
        return a.getKor() > b.getKor();
    else if (a.getEng() != b.getEng())
        return a.getEng() > b.getEng();
    else
        return a.getMath() > b.getMath();
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<Scores> line;

    for (int i = 0; i < n; i++) {
        string temp;
        getline(cin,temp);

        string name;
        int kor,eng,math;

        istringstream iss(temp);
        iss >> name >> kor >> eng >> math;

        line.emplace_back(name,kor,eng,math);
    }

    sort(line.begin(),line.end(),compare);

    for (const Scores& student : line) {
        student.print();
    }

    return 0;
}