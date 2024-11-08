#include<iostream>
using namespace std;

    


int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int a, count=0;
    cout<<"Enter the Number  :" ;
    cin>>a;
        for(int r=1; r<=a; r++) {
        for(int c=1; c<=r; c++) {
            ++count;
             cout<<count<<" " ;
             
        }
        cout<<endl;
    }
    return 0;
}