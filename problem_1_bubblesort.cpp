#include <iostream>
using namespace std;

int main() {
	int n, a[1000]; // n numbers in total, with n <= 1000
	cin >> n;
	// input n numbers
	for (int i = 1; i < n; i++) {
		cin >> a[i];
	}
	// bubble sort, keep comparing neighbors and swap if wrong-ordered
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < n - i; j++) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	// output in order
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}