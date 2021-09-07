#include <iostream> 
using namespace std; 

int main() {
    int n;
    cin >> n;
    for (int i = 10; i <= n; i++) {
        int j = i, sumdig = 0;
        while (j > 0) {
            sumdig += j % 10;
            j /= 10;
        }
        if (i % sumdig == 0)
            cout << i << endl;
    }
    
    return 0;
}
