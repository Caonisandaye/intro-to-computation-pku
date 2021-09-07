#include <iostream>
using namespace std;

int main() {
    char str1[80], str2[80];
    cin.getline(str1,80);
    cin.getline(str2,80);
    
    // firstly convert letter to lower case
    int read = 0;
    while (str1[read] != '\0' && str2[read] != '\0') {
        if (str1[read] >= 65 && str1[read] <= 90)
            str1[read] += 32;
        if (str2[read] >= 65 && str2[read] <= 90)
            str2[read] += 32;
        if (str1[read] != str2[read])
            break;
        read++;
        
    }
    
    // direct comparing can handle the '\0' too
    if (str1[read] < str2[read])
        cout << '<' << endl;
    
    else if (str1[read] > str2[read])
        cout << '>' << endl;

    else
        cout << '=' << endl;

    return 0;
}
