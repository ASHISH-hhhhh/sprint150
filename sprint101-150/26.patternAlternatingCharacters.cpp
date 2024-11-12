#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int row;
    int count = 0;
    cout << "Enter the Row number";
    cin >> row;
    cout << endl;
    for (int i = 1; i <= row; i++) {

        if (i % 2 != 0) {
            for (int j = 1; j <= row; j++) {
                if (j % 2 != 0) {
                    cout << "A";
                }
                if (j % 2 == 0) {
                    cout << "B";
                }
            }
            cout << endl;
        }
        if (i % 2 == 0) {
            for (int j = 1; j <= row; j++) {
                if (j % 2 != 0) {
                    cout << "B";
                }
                if (j % 2 == 0) {
                    cout << "A";
                }
            }
            cout << endl;
        }
    }

}
