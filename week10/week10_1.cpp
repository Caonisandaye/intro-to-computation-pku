#include <iostream> 
using namespace std; 

int main() {
    char c;
    int aeiou[5] = {0, 0, 0, 0, 0};
    
    // count each vowel
    while (cin.get(c)) {
        aeiou[0] += c == 'a';
        aeiou[1] += c == 'e';
        aeiou[2] += c == 'i';
        aeiou[3] += c == 'o';
        aeiou[4] += c == 'u';
    }

    for (int i; i < 5; i++) {
        cout << aeiou[i] << ' ';
    }
    
    return 0;
}
