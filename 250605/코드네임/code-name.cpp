#include <iostream>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];

class Secret {
public:
    char codename;
    int score;

    Secret(char codename = 'A', int score = 0) {
        this->codename = codename;
        this->score = score;
    }
};

int main() {
    Secret arr[MAX_N];
    for (int i = 0; i < MAX_N; i++) {
        char c;
        int s;
        cin >> c >> s;
        arr[i] = Secret(c, s);
    }

    int min_idx = 0;
    for (int i = 1; i < MAX_N; i++) {
        if (arr[i].score < arr[min_idx].score) {
            min_idx = i;
        }
    }
    cout << arr[min_idx].codename << " " << arr[min_idx].score << endl;

    return 0;
}
