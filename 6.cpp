#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    int ones = 0, fives = 0, tens = 0;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == 1) {
            ones++;
        }
        if (m == 5) {
            fives++;
        }
        if (m == 10) {
            tens++;
        }
    }
    cout << ones << endl;
    cout << fives << endl;
    cout << tens << endl;
    return 0;
}
//循环