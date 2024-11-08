#include<iostream>
using namespace std;

int sumEvenInRange(int a, int b) {
    int sum=0;
    for(int i=a; i<=b; i++) {
        if(i%2==0) {
            sum=sum+i;
        }
    }
    return sum;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int a, b;
    cout<<"Enter the Upper range :" ;
    cin>>a;
    cout<<"Enter the Lower range :" ;
    cin>>b;
      cout<<sumEvenInRange(a, b);
    return 0;
}