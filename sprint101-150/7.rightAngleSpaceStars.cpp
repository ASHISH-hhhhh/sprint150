#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int row;
    cin >> row;
    for (int i = row; i >= 1; i--) {
        for(int sp=1;sp<=row-i;sp++){
            cout<<" ";
        }
        for (int c = 1; c <= i; c++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
}
