#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int row;
    int count = 0;
    // cout << "Enter the Row number";
    cin >> row;
    cout << endl;
    for (char i = 'A'; i <='A'+row; i++) {

        for (char j = i; j <=i; j++) {
            cout << i;
        }
        for(char sp='A';sp<=i-2;sp++){
            cout<<" ";
        }
         for (char j = i; j <=i; j++) {
             if(j=='A'){
                 break;
             }
            cout<<" "<<i;
        }
         cout << endl;
    }
   

}
