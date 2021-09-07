#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int mat[5][5], l1, l2;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
        }
    }
    cin >> l1 >> l2;

    if (l1 < 0 || l1 >= 5 || l2 < 0 || l2 >= 5)
        cout << "error" << endl;

    else {
        for (int i = 0; i < 5; i++) {
            int l = i;
            if (i == l1)
                l = l2;
            if (i == l2)
                l = l1;
            for (int j = 0; j < 5; j++) {
                cout << setw(4) << mat[l][j];
            }
            cout << endl;
        }
    }

    return 0;
}