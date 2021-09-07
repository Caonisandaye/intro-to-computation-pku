#include <iostream>
using namespace std;
int main() {
    int h, r;
    cin >> h >> r;
    
    // calculate the volume of each bucket
    double v = h * r * r * 3.14159;
    
    // one more for the rest
    int bucket = (int)(20000 / v);
    cout << bucket + (bucket * v < 20000) << endl;
    
    return 0;
}
