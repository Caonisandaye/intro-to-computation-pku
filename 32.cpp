#include <iostream>
using namespace std;

int gcd(int n, int m) {
    return (m == 0)?n:gcd(m, n%m);
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int r = gcd(n, m);
    for(int i = 0; i < r; i++) {
        int put = a[i], to = (i + m) % n;
        do {
          int temp = a[to];
          a[to] = put;
          put = temp;
          to = (to + m) % n;
        }
        while (to != (i + m) % n);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}