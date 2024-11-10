#include<iostream>
using namespace std;

int sumOfNEvenNumbers(int a) {

    int sum=0;
    for(int i=1; i<=a; i++) {
        sum=sum+2*i;
    }
    return sum;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int n;
    cout<<"Enter the Number:" ;
    cin>>n;
    cout<<sumOfNEvenNumbers(n);
    return 0;
}