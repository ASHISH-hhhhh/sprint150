// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	char row;
// 	cout<<"Enter the character here :";
// 	cin>>row;
// 	cout<<endl;
// 	for(char i=row;i>='A';i--){
// 	   // for(char sp=row;sp<=)
// 	    for(char b=i;b>='A';b--){
// 	        cout<<i;
// 	    }
// 	    cout<<endl;
// 	}


// }
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    char lett;
    cout << "Enter the Alphabet here :";
    cin >> lett;
    cout<<endl;
    for (char r = lett; r >= 'A'; r--) {
        for (int sp = 1; sp <= lett - r; sp++) {
            cout << " ";
        }
        for (char c = r; c >= 'A'; c--) {
            cout << r;
        }
        cout << endl;
    }

}
