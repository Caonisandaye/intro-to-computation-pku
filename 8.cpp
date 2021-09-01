#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        a[i] = m;
    }
    int temp;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << ' ';
    }
    cout << a[n - 1];
    return 0;
}
//短除