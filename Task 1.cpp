#include <iostream>
using namespace std;

int main() {
    int number = 50, guess;

    cout << "Guess number between 1 and 100\n";

    do {
        cout << "Enter your number: ";
        cin >> guess;

        if (guess > number) {
            cout << "Opps!! Too Highest!\n";
        }
        else if (guess < number) {
            cout << "Oops!! Too Lowest!\n";
        }
        else {
            cout << "Yess!! Its Correct!!\n";
        }

    } while (guess != number);

    return 0;
}
