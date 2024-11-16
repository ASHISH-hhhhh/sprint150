#include<iostream>
using namespace std;

int main()
{
    int  row;
    cout<<"Enter the Alphabet :" ;
    cin>>row;
    for(int i=row ; i>=1; i--) {
         for(int sp=1;sp<=row-i;sp++) {
          cout<<" " ;
         }
          for(int c=1;c<=i;c++) {
           cout<<"* ";
          } 
        cout<<endl;
    }
     for(int i=2;i<=row;i++){
      for(int sp=1;sp<=row-i;sp++) {
       cout<<" ";
      }
       for(int c=1;c<=i;c++) {
        cout<<"* " ;
       }
        cout<<endl; 
     } 
    return 0;
}