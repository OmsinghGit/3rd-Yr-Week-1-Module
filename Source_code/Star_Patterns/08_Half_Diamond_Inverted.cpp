#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper Half (Decreasing)
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Half (Increasing)
    for (int i = 2; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}