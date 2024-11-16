#include<iostream>
using namespace std;

int main()
{
     char digit='A' , row;
    cout<<"Enter the Alphabet :" ;
    cin>>row;
    for(char i='A' ; i<=row; i++) {
        for(char j='A' ; j<=i; j++) {
            cout<<digit;
             digit=digit+1;
        }
        cout<<endl;
    }
    return 0;
}