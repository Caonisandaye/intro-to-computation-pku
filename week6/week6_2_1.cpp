#include <iostream>
using namespace std;
int main() {
    int n, x, y;
    cin >> n >> x >> y;
    // apple eaten by worm
    int eaten = y / x + (y % x > 0);
    if (eaten > n)
        cout << 0 << endl;
    else
        cout << n - eaten << endl;
    return 0;
}
