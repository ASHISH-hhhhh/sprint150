#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the Row Number :" ;
    cin>>row;
    for(int i=1; i<=row; i++) {
        cout<<"*";
    }
     cout<<endl;
    for(int i=1; i<=row-2; i++) {
        for(int i=1; i<=1; i++) {
            cout<<"*";
        }
        for(int i=1; i<=row-2; i++) {
            cout<<" ";
        }
        for(int i=1; i<=1; i++) {
            cout<<"*";
        }
        cout<<endl;
        } 
    for(int i=1; i<=row; i++) {
        cout<<"*";
    }
    return 0;
}