#include <iostream>
using namespace std;

int main() {
    int L, M;
    cin >> L >> M;
    int start[M], end[M];

    for (int i; i < M; i++) {
        cin >> start[i] >> end[i];
    }

    for (int i = 0; i < M - 1; i++) {
      for (int j = 1; j < M - i; j++) {      
        if (start[j - 1] > start[j]) {
          int temp = start[j];
          start[j] = start[j - 1];
          start[j - 1] = temp;
        }    
      }  
    }

    for (int i = 0; i < M - 1; i++) {
      for (int j = 1; j < M - i; j++) {      
        if (end[j - 1] > end[j]) {
          int temp = end[j];
          end[j] = end[j - 1];
          end[j - 1] = temp;
        }    
      }  
    }

    int l = 0, r = 0, tocut = 0;

    while (r < M - 1) {
        if (start[r + 1] <= end[r])
            r += 1;
        else {
            tocut += (end[r] - start[l] + 1);
            l = r + 1;
            r = r + 1;
        }
    }

    tocut += (end[r] - start[l] + 1);

    cout << L + 1 - tocut << endl;

    return 0;
}