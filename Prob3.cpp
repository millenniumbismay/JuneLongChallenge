/*
Correct Answer
---------------
Chef has 2 numbers A and B (A<B).

Chef will perform some operations on A.

In the ith operation:

Chef will add 1 to A if i is odd.
Chef will add 2 to A if i is even.
Chef can stop at any instant. Can Chef make A equal to B?

Sample Input 1 
4
1 2
3 6
4 9
10 20
Sample Output 1 
YES
YES
NO
YES
Explanation
Test case 1: Chef may perform one operation to make A equal to B: 1 −→+1 2
Test case 2: 3 −→+1 4 −→+2 6
Test case 3: It can be shown that it is impossible to make A and B equal.
Test case 4: 10 −→+1 11 −→+2 13 −→+1 14 −→+2 16 −→+1 17 −→+2 19−→+1 20

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>a>>b;
        int diff = b-a;
        int rem = diff%6;
        cout<<rem<<endl;
        if(rem == 0 || rem == 1 || rem == 3 || rem == 4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}