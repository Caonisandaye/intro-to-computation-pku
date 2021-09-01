#include <iostream>
using namespace std;
int main() {
    int tri, hun_bit, ten_bit, uni_bit;
    cin >> tri;
    // calculate bits
    hun_bit = tri / 100;
    ten_bit = (tri % 100) / 10;
    uni_bit = tri % 10;
    // output bits
    cout << hun_bit << endl;
    cout << ten_bit << endl;
    cout << uni_bit << endl;

    return 0;
}
