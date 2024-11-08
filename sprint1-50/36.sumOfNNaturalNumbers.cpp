#include<iostream>
using namespace std;

int nthTriangular(int a) {
    int sumNth=0;
     for(int i=1;i<=a;i++){
       sumNth=sumNth+i;
     }
      return sumNth;
}

int main()
{
    cout << "**********************Sprint150!*****************************" << endl;
    int  n;
     cout<<"Enter the nth Number :";
      cin>>n; 
    cout<<nthTriangular(n);
    return 0;
}