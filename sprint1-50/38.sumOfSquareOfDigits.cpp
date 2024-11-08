#include<iostream>
using namespace std;

int squareOfDigits(int a) {
    int digitSqSum=0, lastDigit;
     while(a) {
     lastDigit=a%10;
      digitSqSum=digitSqSum+lastDigit*lastDigit;
       a=a/10;
     } 
     
      return digitSqSum;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int  n;
     cout<<"Enter the Number :";
      cin>>n; 
    cout<<squareOfDigits(n);
    return 0;
}