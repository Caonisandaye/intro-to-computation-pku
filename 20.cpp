#include <iostream> 
using namespace std; 

int main() {
    int value;
    int face[6] = {100, 50, 20, 10, 5, 1};
    int need[6];

    cin >> value;
    for (int i = 0; i < 6; i++) {
        need[i] = value / face[i];
        value -= value / face[i] * face[i];
        cout << need[i] << endl;
    }

    return 0;
}