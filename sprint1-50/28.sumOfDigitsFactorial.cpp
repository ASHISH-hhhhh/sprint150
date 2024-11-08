#include<iostream>
using namespace std;

int factorialDigitSum(int a) {
    int factorial=1;

    for(int i=a; i>=1; i--) {
        factorial=factorial*i;
    }
    cout<<factorial<<endl;

    int factorialSum=0;
    while(factorial) {
        factorialSum=factorialSum+factorial%10;
        factorial=factorial/10;
    }

    return factorialSum;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int a;
    cout<<"Enter the Number:" ;
    cin>>a;
    cout<<factorialDigitSum(a);
    return 0;
}