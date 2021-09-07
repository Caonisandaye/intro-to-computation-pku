#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cell[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cell[i][j];
        }
    }

    int abn = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int dir = 0;
            dir += (i > 0 && cell[i-1][j] - cell[i][j] >= 50);
            dir += (i < n - 1 && cell[i+1][j] - cell[i][j] >= 50);
            dir += (j > 0 && cell[i][j-1] - cell[i][j] >= 50);
            dir += (j < n - 1 && cell[i][j+1] - cell[i][j] >= 50);
            abn += dir == 4;
        }
    }

    cout << abn;

    return 0;
}