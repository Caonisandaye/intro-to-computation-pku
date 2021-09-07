#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    char output = 'N';
    if (year % 4 == 0) {
        output = 'Y';
        if (year % 100 == 0) {
            output = 'N';
            if (year % 400 == 0) {
                output = 'Y';
                if (year % 3200 == 0) {
                    output = 'N';
                }
            }
        }
    }
    cout << output;
    
    return 0;
}
