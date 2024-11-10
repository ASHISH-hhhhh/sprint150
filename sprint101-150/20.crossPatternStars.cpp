#include<iostream>
using namespace std;

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int number;
    cout<<"Enter the Number:" ;
    cin>>number;
    for(int j=1; j<=number; j++) {
        cout<<"*";
    }
     cout<<endl;
    for(int i=1; i<=number-2; i++) {
        
        for(int sp=1; sp<=number-1; sp++) {
            cout<<" ";
        }
        for(int j=i; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int j=1; j<=number; j++) {
        cout<<"*";
    }
    return 0;
}