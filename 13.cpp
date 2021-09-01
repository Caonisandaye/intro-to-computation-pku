#include <iostream>
using namespace std;
int main() {
    int maxodd = 1, mineven = 100, cur;
    // keep update the maxodd and min even
    for (int i = 0; i < 6; i++) {
        cin >> cur;
        if (cur % 2 == 1 && cur > maxodd)
            maxodd = cur;
        else if (cur % 2 == 0 && cur < mineven)
            mineven = cur;
    }
    // output larger - smaller
    if (mineven > maxodd)
        cout << mineven - maxodd << endl;
    else
        cout << maxodd - mineven << endl;

    return 0;
}
