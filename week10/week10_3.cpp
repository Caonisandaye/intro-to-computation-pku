#include <iostream>
using namespace std;

int main() {
    char str[80];
    cin.getline(str, 80);
    int opt_start = 0, opt_end = 0, cur_start = 0, cur_end = 0;
    
    // find the longest word by recording start and end letter, each end letter should be a space or period
    for (int i = 0; i < 80; i++) {
        if (str[i] == ' ' || str[i] == '.') {
            cur_end = i;
            if (cur_end - cur_start > opt_end - opt_start) {
                opt_start = cur_start;
                opt_end = cur_end;
            }
            cur_start = cur_end + 1;
        }
        if (str[i] == '.') {
            break;
        }
    }

    for (int i = opt_start; i < opt_end; i++) {
        cout << str[i];
    }

    return 0;
}
