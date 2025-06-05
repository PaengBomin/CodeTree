#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

class Rainy {
    private:
        string date,day,weather;
    public:
        Rainy(string date,string day,string weather);
        void print_rainy();
};

Rainy::Rainy(string date,string day,string weather) {
    this->date=date;
    this->day=day;
    this->weather=weather;
}

void Rainy::print_rainy() {
    cout << date << " " << day << " " << weather << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string date,day,weather;
    vector<string> line;

    for (int i = 0; i < n; i++) {
        string temp;
        getline(cin,temp);
        if (temp.find("Rain")!=string::npos)
            line.push_back(temp);
    }

    sort(line.begin(),line.end());

    istringstream newline(line[0]);
    newline >> date >> day >> weather;

    Rainy rain(date,day,weather);

    rain.print_rainy();

    return 0;
}