#include<iostream>
using namespace std;

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int number;
    int notS=1;
    cout<<"Enter the Number:" ;
    cin>>number;
      for(int i=1;i<=number;i++){
       notS=!notS;
       for(int j=1;j<=number;j++){
        cout<<notS;
           notS=!notS;
       }
        cout<<endl;
      }
    return 0;
}