#include <iostream>
using namespace std;

int main() {

    // Upper Part
    for (int i = 3; i <= 7; i++) {

        for (int j = 7; j >= i; j--) {
            cout << i << " ";
        }

        cout << endl;
    }

    // Lower Part
    for (int i = 6; i >= 3; i--) {

        for (int j = 7; j >= i; j--) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}