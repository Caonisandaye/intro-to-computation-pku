#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        cnt1 += (m <= 18);
        cnt2 += (m >= 19 && m <= 35);
        cnt3 += (m >= 36 && m <= 60);
        cnt4 += (m >= 61);
    }

    cout << "1-18: " << fixed << setprecision(2) << cnt1 / (n/100.0) << '%' << endl; 
    cout << "19-35: " << fixed << setprecision(2) << cnt2 / (n/100.0) << '%' << endl; 
    cout << "36-60: " << fixed << setprecision(2) << cnt3 / (n/100.0) << '%' << endl; 
    cout << "60-: " << fixed << setprecision(2) << cnt4 / (n/100.0) << '%' << endl; 

    return 0;
}
