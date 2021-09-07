#include <iostream> 
using namespace std; 

int main() {
    int N, K;
    while (cin >> N >> K) {
        double save = 0, house = 200;
        
        // get income, check house price, then inflation
        for (int i = 1; i <= 20; i++) {
            save += N;
            if (save >= house){
                cout << i << endl;
                break;
            }
            house *= (1 + K/100.0);
        }
        
        // cant afford in 20 years
        if (save < house)
            cout << "Impossible" << endl;
    }

    return 0;
}
