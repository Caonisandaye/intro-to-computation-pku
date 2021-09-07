#include <iostream> 
using namespace std; 

int main() {
    // enumerate the possible best car
    int best;
    for (best = 1; best <= 4; best++) {
        bool a = (best == 2);
        bool b = (best == 4);
        bool c = (best != 3);
        bool d = !b;
        // count the nuber of right statements
        if (a + b + c + d != 1)
            continue;
        cout << best << endl;
        if (a == 1)
            cout << "A" << endl;
        else if (b == 1)
            cout << "B" << endl;
        else if (c == 1)
            cout << "C" << endl;
        else
            cout << "D" << endl;
    }

    return 0;
}
