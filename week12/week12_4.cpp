#include <iostream>
using namespace std;

int main() {
    int a, b;
    char o;
    cin >> a >> b >> o;

    if (o == '+')
        cout << a + b;
    else if (o == '-')
        cout << a - b;
    else if (o == '*')
        cout << a * b;
    else if (o == '/'){
        if (b == 0)
            cout << "Divided by zero!";
        else
            cout << a / b;
    }
    else
        cout << "Invalid operator!";

    return 0;
}
