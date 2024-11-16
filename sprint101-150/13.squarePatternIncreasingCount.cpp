#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int row;
    cout<<"Enter the row number :" ;
    cin>>row;
    for(int i=1; i<=row; i++) {
        for(int c=1; c<=row; c++) {
            count=count+1; 
            cout<<count<<"  ";
        }
        cout<<endl;
    }
    return 0;
}