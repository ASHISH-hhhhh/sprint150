#include<iostream>
using namespace std;

void divisorsOfProduct(int a,int b) {
    int product=a*b;
    cout<<product<<endl;
    for(int i=1; i<=product/2; i++) {
        if(product%i==0) {
            cout<<i<<", ";
        }
    }
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int n, i;
    cout<<"Enter the first Number:" ;
    cin>>n;
    cout<<"Enter the second Number:" ;
    cin>>i;
    divisorsOfProduct(n,i);
    return 0;
}