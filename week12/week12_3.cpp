#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double p[n][2];

    for (int i = 0; i < n; i++) {
        cin >> p[i][0] >> p[i][1];
    }
    
    // calculating euclidean distance for pairs
    double dis = 0.0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            double cur_dis = sqrt(pow(p[i][0]-p[j][0], 2) + pow(p[i][1]-p[j][1], 2));
            if (cur_dis > dis) {
                dis = cur_dis;
            }
        }
    }

    cout << fixed << setprecision(4) << dis << endl;

    return 0;
}
