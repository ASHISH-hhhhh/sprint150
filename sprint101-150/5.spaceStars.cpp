#include<iostream>
using namespace std;

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int number;
    cout<<"Enter the Number:" ;
    cin>>number;
     for(int a=1;a<=number;a++){
      cout<<"*";
     }
      cout<<endl;
    for(int i=number-2; i>=1; i--) {
        for(int j=1; j<=1; j++) {
            cout<<"*" ;
        }
         for(int sp=1;sp<=number-2;sp++){
          cout<<" "; 
         }
          for(int j1=1;j1<=1;j1++){
            cout<<"*";
          }
        cout<<endl;
    }
      for(int a=1;a<=number;a++){
      cout<<"*";
     }
    return 0;
}