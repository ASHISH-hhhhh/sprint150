#include<iostream>
using namespace std;

int main()
{
      int digit=1 , row;
    cout<<"Enter the Alphabet :" ;
    cin>>row;
    for(int i=1 ; i<=row; i++) {
        for(int j=1 ; j<=row; j++) {
            cout<<digit;
             digit=digit+1;
        }
        cout<<endl;
    }
    return 0;
}