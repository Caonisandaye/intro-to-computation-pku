#include <iostream> 
using namespace std; 

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // check if there is a satisfactory pair, default false
    bool output = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k)
                output = true;
        }
    }
    
    cout << (output?"yes":"no") << endl;

    return 0;
}
