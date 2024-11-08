#include<iostream>
using namespace std;

int numDigits(int a) {
    int count=0;
    while(a) {
        count++;
        a=a/10;
    }

    return count;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int a;
    cout<<"Enter the Number  :" ;
    cin>>a;
    cout<<numDigits(a);
    return 0;
}