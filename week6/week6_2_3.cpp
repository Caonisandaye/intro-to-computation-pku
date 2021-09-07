#include <iostream>
using namespace std;
int main() {
    int n, max;
    cin >> n;
    
    // input student score, record the current max
    for (int i = 0; i < n; i++) {
        int cur;
        cin >> cur;
        if (cur > max) {
            max = cur;
        }
    }
    
    cout << max << endl;

    return 0;
}
