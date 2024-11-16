#include<iostream>
using namespace std;

int main()
{
     int count=0, row;
       cout<<"Enter the row number :" ;
        cin>>row;
      for(int i=1;i<=row;i++) {
       for(int j=1;j<=i;j++) {
        count++;
         cout<<count;
       }
        cout<<endl; 
      } 
    return 0;
}