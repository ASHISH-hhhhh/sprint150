#include<iostream>
using namespace std;

int lastDigitSum(int lastDigit, int power) {

    int ldSum=lastDigit;
    for(int i=1; i<power; i++) {
        ldSum=ldSum*lastDigit;
    }
    return ldSum;
}

int main()
{

 
    cout << "**********************Sprint150!*****************************" << endl;
    int armstrongNumber,armsNum, sum=0, armChecker,powerR=0;

    cout<<"Enter the Armstrong Number : " ;
    cin>>armstrongNumber;
    armsNum=armstrongNumber;
    armChecker=armstrongNumber;
    while(armsNum) {
        powerR=powerR+1;
        armsNum=armsNum/10;
    }
    cout<<powerR<<","<<armsNum<<","<<armstrongNumber <<endl;
    while(armstrongNumber) {
        int lastDigit=armstrongNumber%10;
            sum=sum+lastDigitSum(lastDigit,powerR) ;
        armstrongNumber=armstrongNumber/10;
    }
    cout<<sum<<" Sum here" <<endl;
    if(sum==armChecker) {
        cout<<armChecker<<" Is a Armstrong Number" ;
    }
    else {
        cout<<armChecker<<" Is not a Armstrong Number" ;
    }
    return 0;
}