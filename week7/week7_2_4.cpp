#include <iostream> 
using namespace std; 

int main() {
    int value;
    int face[6] = {100, 50, 20, 10, 5, 1};
    int need[6];
    
    // fully utilize biggest face value, calculate residual
    cin >> value;
    for (int i = 0; i < 6; i++) {
        need[i] = value / face[i];
        value %= face[i];
        cout << need[i] << endl;
    }

    return 0;
}
