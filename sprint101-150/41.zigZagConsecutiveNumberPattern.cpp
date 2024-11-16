#include<iostream>
using namespace std;

int main()
{
    int row, ml=0;
    cout<<"Enter the Row Number :";
    cin>>row;
    for(int i=1; i<=row; i++) {
        if(i%2!=0) {
         
            for(int p=1; p<=row; p++) {
                 ml=ml+1;
                   cout<<ml<<" " ;
            }
             
        }
        if(i%2==0) {
          ml=ml+4;
            for(int r=1; r<=row; r++) {
                cout<<ml<<" " ;
                ml=ml-1;
            }
             ml=ml+4;
        }
        cout<<endl;
    }
    return 0;
}