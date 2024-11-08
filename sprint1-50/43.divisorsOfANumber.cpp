#include<iostream>
using namespace std;

void allDivisors(int a) {
    for(int i=1; i<=a; i++) {
        if(a%i==0) {
            cout<<i<<", ";
        }
    }
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int  n;
    cout<<"Enter the Number :";
    cin>>n;
    allDivisors(n);
    return 0;
}