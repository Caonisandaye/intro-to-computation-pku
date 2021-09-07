#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0) {
            cout << 'n';
        }
        else {
            if (n % 3 == 0) {
                cout << '3' << ' ';
            }
            if (n % 5 == 0) {
                cout << '5' << ' ';
            }
            if (n % 7 == 0) {
                cout << '7' << ' ';
            }

        }
        cout << endl;
    }

    return 0;
}