#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the row number :" ;
    cin>>row;
    char lett='A' ;
    for(int i=1 ; i<=row; i++) {
        for(int sp=1; sp<=row-i; sp++) {
            cout<<" ";
        }
        for(int c=1 ; c<=i; c++) {
            cout<<c;

        }
        for(int r=i-1; r>=1; r--) {
            cout<<r;
        }
        cout<<endl;
    }
    for(int i=row-1; i>=1; i--) {
        for(int sp=1; sp<=row-i; sp++) {
            cout<<" ";
        }
        for(int c=1; c<=i; c++) {
           cout<<c;
        }
        for(int r=i-1; r>=1; r--) {
            cout<<r; 
        }
        cout<<endl;
    }
    return 0;
}