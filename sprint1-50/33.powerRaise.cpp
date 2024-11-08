#include<iostream>
using namespace std;

int powerRaise(int b, int e) {
 int power=1;
     for(int i=1;i<=e;i++){
       power=power*b;
     }
      return power;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int  base, exponent;
    cout<<"Enter the Base:" ;
    cin>>base;
     cout<<"Enter the Exponent:" ;
      cin>>exponent;
    cout<<powerRaise(base, exponent);
    return 0;
}