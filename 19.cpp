#include <iostream> 
using namespace std; 

int main() {
    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++)
        a[i] = 0;

    for (int i = 0; i < n; i++){
        int nxt;
        cin >> nxt;
        int comp = 0;
        while (comp < m && nxt > a[comp])
            comp += 1;
        for (int j = 1; j < comp; j++) {
            a[j - 1] = a[j];
        }
        a[comp - 1] = nxt;
    }

    cout << a[0];

    return 0;
}