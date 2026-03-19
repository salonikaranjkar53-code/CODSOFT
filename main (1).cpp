#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    char ch;

    cout << "---- Simple Calculator ----\n";   

    cout << "Enter first value: ";
    cin >> n1;

    cout << "Select operator (+, -, *, /): ";
    cin >> ch;

    cout << "Enter second value: ";
    cin >> n2;

    switch(ch) {
        case '+':
            cout << "Answer = " << n1 + n2;
            break;

        case '-':
            cout << "Answer = " << n1 - n2;
            break;

        case '*':
            cout << "Answer = " << n1 * n2;
            break;

        case '/':
            if(n2 == 0)
                cout << "Cannot divide by zero!";
            else
                cout << "Answer = " << n1 / n2;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}