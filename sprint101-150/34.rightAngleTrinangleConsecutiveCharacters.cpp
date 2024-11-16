#include<iostream>
using namespace std;

int main()
{
    char lett='A', row;
    cout<<"Enter the Alphabet :" ;
    cin>>row;
    for(char i='A' ; i<=row; i++) {
        for(char j='A' ; j<=i; j++) {
            cout<<lett<<" ";
            lett=lett+1;
        }
        cout<<endl;
    }
    return 0;
}