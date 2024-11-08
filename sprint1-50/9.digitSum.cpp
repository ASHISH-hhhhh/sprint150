#include<iostream>
using namespace std;

int factorial(int n) {
    int digitSum=0;
     while(n) {
         digitSum=digitSum+n%10;
          n=n/10;
    }
    return digitSum;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int digitSumNumber;
    cout<<"Enter the factorial number :" ;
    cin>>digitSumNumber;
    cout<<factorial(digitSumNumber) ;
    return 0;
}