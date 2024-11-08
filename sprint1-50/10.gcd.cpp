#include<iostream>
using namespace std;

int gcd(int x, int y) {
    int answer=0;
    while(x%y) {
        answer=x%y;
        x=y;
        y=answer;
    }
    return answer;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int a, b;
    cout<<"Enter the first number :" ;
    cin>>a;
    cout<<"Enter the second number :" ;
    cin>>b;
    cout<<gcd(a, b) ;
    return 0;
}