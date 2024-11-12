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
            for (int i = 1; i <= row; i++) {
                count = count + 1;
                cout << count << " ";
            }
            cout << endl;
        }
        if (i % 2 == 0) {
            count = count + 4;
            for (int j = count; j > count - 4; j--) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

}
