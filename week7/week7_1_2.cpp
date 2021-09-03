#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumn = 0, sumd = 1; // store the result sumn/sumd
    while (n--) {
        int num, deno;
        char slash; // to absorb /
        cin >> num >> slash >> deno;

        // calculate gcd of deno and sumn
        int a = deno, b = sumd, c;
        while (a != 0) {
            c = a; a = b % a; b = c;
        }
        int gcd = b;
        // cancel out gcd
        deno /= gcd;
        sumd /= gcd;

        // calculate a/b + c/d = 
        sumn = sumn * deno + num * sumd;
        sumd = sumd * deno * gcd;
        
        // calculate gcd of sumd and sumn
        a = sumd, b = sumn;
        while (a != 0) {
            c = a; a = b % a; b = c;
        }
        gcd = b;
        // cancel out gcd
        sumd /= gcd;
        sumn /= gcd;
    }
    if (sumd > 1)
        cout << sumn << '/' << sumd << endl;
    else
        cout << sumn << endl;

    return 0;
}
