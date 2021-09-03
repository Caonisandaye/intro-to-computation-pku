#include<iostream>
using namespace std;

// 300 monkeys in total
int succedent[300]; // to store the next monkey for each one
int precedent[300]; // to store the previous monkey

int main() {
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        for (int i = 0; i < n - 1; i++) {
            succedent[i] = i + 1;
            precedent[i + 1] = i;
        }
        succedent[n - 1] = 0;
        precedent[0] = n - 1;

      int current = 0;
      while (true) {
          // take m-1 succedent then we have the monkey to quit
          for (int count = 0; count < m - 1; count++) {
              current = succedent[current];
          }
          int pre = precedent[current];
          int suc = succedent[current];
          // quit the current by modifying the precedent and succedent
          succedent[pre] = suc;
          precedent[suc] = pre;
          if (pre == suc) {
              // if only one left, output
              cout << pre + 1 << endl;
              break;
          }
          current = suc;
      }
    }
    return 0;
}
