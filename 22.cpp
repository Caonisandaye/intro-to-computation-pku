#include <iostream> 
using namespace std; 

int main() {
    int a;
    cin >> a;
    int smaller = 0;
    // input, compare, add
    for (int i = 0; i < 5; i++) {
        int b;
        cin >> b;
        if (b < a) {
            smaller += b;
        }
    }
    cout << smaller << endl;

    return 0;
}