#include <iostream>
using namespace std;

class University {
private:
    string name;
    int ranking;

public:
    void setName(string n) { name = n; }
    void setRanking(int r) { ranking = r; }
    string getName() { return name; }
    int getRanking() { return ranking; }
};

int main() {
    University u;
    u.setName("Sai University");
    u.setRanking(1);

    // cout << u.name;  ❌ ERROR: Cannot access private members directly

    cout << "University Name: " << u.getName() << endl;
    cout << "University Ranking: " << u.getRanking() << endl;

    return 0;
}
