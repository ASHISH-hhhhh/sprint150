#include<iostream>
using namespace std;

void table(int a) {
    for(int i=1; i<=10; i++) {
        cout<<a<<"*"<<i<<"=" <<a*i<<endl;
    }
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int a;
     cout<<"Enter the Table Number :" ;
        cin>>a;
         table(a); 
    return 0;
}