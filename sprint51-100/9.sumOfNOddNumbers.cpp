#include<iostream>
using namespace std;

 int sumOfNthsOdd(int a){
   int sumOfNOdd=0;
  for(int i=1;i<=a;i++){
    sumOfNOdd=sumOfNOdd+2*i-1;
  }
   return sumOfNOdd; 
 } 

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int n;
    cout<<"Enter the Nth Number:" ;
    cin>>n;
     cout<<sumOfNthsOdd(n); 
    return 0;
}