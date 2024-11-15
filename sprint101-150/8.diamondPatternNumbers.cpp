#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int row = 1;
    cout << "Enter the row number :";
    cin >> row;
    cout<<endl;
    for (int i = 1; i <= row; i++) {
        for (int sp = 1; sp <= row - i; sp++) {
            cout << " ";
        }
        for (int c = 1; c <= i; c++) {
            cout << c;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    for(int i=row-1;i>=1;i--){
        for(int sp=1;sp<=row-i;sp++){
            cout<<" ";
        }
        for(int c=1;c<=i;c++){
            cout<<c;
        }
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

}
