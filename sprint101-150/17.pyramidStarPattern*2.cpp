#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the row number :" ;
    cin>>row;
    for(int i=1 ; i<=row; i++) {
        for(int sp=1; sp<=row-i; sp++) {
            cout<<" ";
        }
        for(int c=1 ; c<=i*2-1; c++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}