#include <iostream> 
using namespace std; 

int main() {
    int n, dis;
    cin >> n;
    
    // input distance, calculate bike vs walk
    for (int i = 0; i < n; i++) {
        cin >> dis;
        double walk = dis / 1.2;
        double bike = dis / 3.0 + 50;
        if (walk == bike)
            cout << "All" << endl;
        else
            cout << ((walk < bike)? "Walk" : "Bike") << endl;
    }

    return 0;
}
