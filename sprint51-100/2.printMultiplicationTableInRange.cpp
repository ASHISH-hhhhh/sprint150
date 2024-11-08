#include<iostream>
using namespace std;

void  printMultiTableInRange(int a, int b) {
    for(int i=a; i<=b; i++) {
        for(int j=1; j<=10; j++) {
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
    }
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int  lowerRange,upperRange;
    cout<<"Enter the lower range:" ;
    cin>>lowerRange;
    cout<<"Enter the upper range:" ;
    cin>>upperRange;
    printMultiTableInRange(lowerRange, upperRange);
    return 0;
}