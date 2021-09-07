#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n && n > 0 && n <= 15000) {
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = n - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (a[j] > a[j+1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        if (n % 2 == 1)
            cout << a[n/2] << endl;
        else
            cout << (a[n/2-1] + a[n/2]) / 2 << endl;
    }

    return 0;
}