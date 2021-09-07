#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m;
    cin >> n;
    m += (1 - m % 2);
    n -= (1 - n % 2);
    cout << (m + n) / 2 * ((n - m) / 2 + 1) << endl;
    return 0;
}
//output directly
