#include<iostream>
using namespace std;

int sumOfDigitsProduct(int a,int b) {
    int product=a*b;
      cout<<product<<endl;
    int sum=0;
    while(product) {
        sum=sum+product%10;
        product=product/10;
    }

    return sum;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int n, i;
    cout<<"Enter the first Number:" ;
    cin>>n;
    cout<<"Enter the second Number:" ;
    cin>>i;
    cout<<sumOfDigitsProduct(n,i);
    return 0;
}