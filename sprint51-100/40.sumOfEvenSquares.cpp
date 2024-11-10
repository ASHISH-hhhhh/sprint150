#include<iostream>
using namespace std;

int sumOfEvenSquares(int number) {

    int sum=0;
      for(int i=1;i<=number;i++){
        if(i%2==0){
         sum=sum+i*i;
        }
      }
     
    return sum;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int number;
    cout<<"Enter the Number:" ;
    cin>>number;
     
    cout<<sumOfEvenSquares(number);
    return 0;
}