#include<iostream>
using namespace std;

int main()
{
    int row, ml=0;
    cout<<"Enter the Row Number :";
    cin>>row;
    for(int i=1; i<=row; i++) {
        if(row%2==0) {
            ml=! ml;
        }
        for(int i=1; i<=row; i++) {
            ml=! ml;
            if(ml) {
                cout<<"X";
            } else{
             cout<<0;
            } 
        }
        cout<<endl;
    }
    return 0;
}