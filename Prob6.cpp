/*
Wrong Answer
-----------------

Chef has two distinct positive integers A and B.

Chef wonders how many distinct values are possible for the expression gcd(A+X,B+X), where X can take any non-negative integer value.

Help Chef find this value.

Sample Input 1 
2
1 2
12 8
Sample Output 1 
1
3
Explanation
Test case 1: Here gcd(1+X,2+X)=1 no matter what value of X you choose.

Test case 2:

If we take X=0, gcd(12,8)=4.
If we take X=1, gcd(13,9)=1.
If we take X=2, gcd(14,10)=2.
It can be shown that no other value of gcd is possible.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int init_gcd = __gcd(a,b);

        set<int> st;
        st.insert(init_gcd);
        
        int c=a;
        int d=b;
        while(1)
        {
            c++;
            d++;
            int curr_gcd = __gcd(c,d);
            if(curr_gcd == init_gcd)
                break;
            st.insert(curr_gcd);
        }

        cout<<st.size()<<endl;
    }
    return 0;
}