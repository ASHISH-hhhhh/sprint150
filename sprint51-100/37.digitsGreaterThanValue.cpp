#include<iostream>
using namespace std;

int digitsGreaterThanValue(int number, int value) {

    int count=0;
     while(number) {
      if(number%10>value){
       count++;
      }
       number=number/10;
     } 
    return count;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int number, value;
    cout<<"Enter the Number:" ;
    cin>>number;
     cout<<"Enter the value :" ;
      cin>>value;
    cout<<digitsGreaterThanValue(number, value);
    return 0;
}