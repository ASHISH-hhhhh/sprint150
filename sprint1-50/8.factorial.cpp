#include<iostream>
using namespace std;

int factorial(int n) {
    int factorialSum=1;
    for(int i=n; i>=1; i--) {
        factorialSum=factorialSum*i;
    }
    return factorialSum;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int factorialNumber;
    cout<<"Enter the factorial number :" ;
    cin>>factorialNumber;
    cout<<factorial(factorialNumber) ;
    return 0;
}