#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    // short division
    for (int i = 0; i < n; i++) {
        int m, op = 0;
        cin >> m;
        while (m > 0) {
            op += m % 2;
            m /= 2;
        }
        cout << op << endl;
    }
    
    return 0;
}
