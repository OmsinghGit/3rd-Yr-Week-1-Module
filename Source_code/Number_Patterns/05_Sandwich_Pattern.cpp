#include <iostream>
using namespace std;

int main() {

    int n = 5;
    int num = 3;

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Numbers
        for (int j = i; j <= n; j++) {
            cout << num << " ";
        }

        cout << endl;
        num++;
    }

    return 0;
}