// a genius approach, solve by moving each congruence group, sadly not innovated by me
#include <iostream>
using namespace std;

// gcd method
int gcd(int n, int m) {
    return (m == 0)?n:gcd(m, n%m);
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    // move each congruence group, end till meet the beginning element
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
