#include<iostream>
using namespace std;


int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int n;
    cout<<"Enter the Nth Number:" ;
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int sp=1; sp<=n-i; sp++) {
            cout<<" " ;
        }
        for(int c=1; c<=2*i-1; c++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--) {
        for(int sp=1; sp<=n-i; sp++) {
            cout<<" " ;
        }
        for(int c=1; c<=2*i-1; c++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}