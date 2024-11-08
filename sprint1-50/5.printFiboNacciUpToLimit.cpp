#include<iostream>
using namespace std;

void printFibb(int limit) {
    int ps=0,cs=1,fs;
    cout<<ps<<", "<<cs<<", " ;
    while(1) {
        if(ps+cs>10) {
            break;
        }
        fs=ps+cs;
        cout<<fs<<", " ;
        ps=cs;
        cs=fs;
    }
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int fibbLimit;
    cout<<"Enter the Fibonacci Limit :" ;
    cin>>fibbLimit;
     printFibb(fibbLimit); 
    return 0;
}