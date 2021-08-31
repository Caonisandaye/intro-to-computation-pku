#include <iostream>
using namespace std;

int main() {
  int a[10];
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  //first put odd to left and even to right
  int l = 0, r = 9; //pointers both to left and right end 
  while (l <= r) {
    bool leftIsOdd = a[l] % 2 == 1;
    bool rightIsEven = a[r] % 2 == 0;
    if (leftIsOdd) {
      l++;
    }
    else if (rightIsEven) {
      r--;
    }
    else if (!leftIsOdd && !rightIsEven) {
      int temp = a[l];
      a[l] = a[r];
      a[r]; = temp;
    }
  }
  //bubble sort the left
  int start = 0, end = l;
  for (int i = start; i < end - 1; i++) {
    for (int j = start + 1; j < start + end - i; j++) {
      if (a[j - 1] > a[j]) {
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
  }
  //bubble sort the right
  start = l, end = 10;
  for (int i = start; i = end - 1; i++) {
    for (int j = start + 1; j < start + end - i; j++) {
      if (a[j - 1] > a[j]) {
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
  } 

  return 0;
}