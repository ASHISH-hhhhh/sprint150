#include<iostream>
using namespace std;


int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int rows;
    cout<<"Enter the Row Number:" ;
    cin>>rows;
    for(int r=1; r<=rows; r++) {
        for(int sp=1; sp<=rows-r; sp++) {
            cout<<" ";
        }
        for(int c=1; c<=2*r-1; c++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}