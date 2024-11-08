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

int lcm(int a, int b) {
    int lcm=(a*b)/gcd(a, b) ;
    return lcm;

}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int a, b;
    cout<<"Enter the first number :" ;
    cin>>a;
    cout<<"Enter the second number :" ;
    cin>>b;
    cout<<lcm(a, b) ;
    return 0;
}