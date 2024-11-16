#include<iostream>
using namespace std;

int main()
{
    char row;
    cout<<"Enter the row number :" ;
    cin>>row;
    for(char i='A' ; i<=row; i++) {
        for(char c='A' ; c<=i; c++) {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}