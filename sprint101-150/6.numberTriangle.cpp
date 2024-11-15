#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++) {

        for (int c = 1; c <= i; c++) {
            cout << c*i;
        }
        cout << endl;
    }

    cout << endl;
}
