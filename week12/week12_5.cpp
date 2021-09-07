#include <iostream>
using namespace std;
int main() {
    char str[11] = { 0 }, substr[4] = { 0 };

    while (cin >> str >> substr){
        int insert = 0;
        for (int i = 0; i < 11; i++) {
            if (str[i] == '\0')
                break;
            if (str[i] > str[insert])
                insert = i;
        }
        
        for (int i = 0; i < insert + 1; i++)
            cout << str[i];
        for (int i = 0; i < 4; i++){
            if (substr[i] == '\0'){
                break;
            }
            cout << substr[i];
        }
        for (int i = insert + 1; i < 11; i++){
            if (str[i] == '\0')
                break;
            cout << str[i];
        }

        cout << endl;

        char str[11] = { 0 }, substr[4] = { 0 };
    }

    return 0;
}
