#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n && n > 0 && n < 15000) {
        int a[15000] = {0};
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a[temp]++;
        }
        int lwr = (n + n%2) / 2, upr = (n - n%2) / 2 + 1, left = 0, right = 0;
        int chk = -1, cml = 0;

        while (cml < lwr) {
            chk++;
            cml += a[chk];
        }
        left = chk;

        while (cml < upr) {
            chk++;
            cml += a[chk];
        }
        right = chk;

        cout << (left + right) / 2 << endl;
    }

    return 0;
}
