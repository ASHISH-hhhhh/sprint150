#include<iostream>
using namespace std;

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int number;
    int count=0;
    cout<<"Enter the Number:" ;
    cin>>number;
    for(int a=1; a<=number; a++) {
        for(int sp=1; sp<=number-a; sp++) {
            cout<<" ";
        }
        for(int b=a; b<=a+a-1; b++) {
            count=b;
            cout<<count;
            count=count+1;
        }
         for(int j=a+a-2;j>=a;j--) {
          cout<<j;
         }
        cout<<endl;
    }
    return 0;
}