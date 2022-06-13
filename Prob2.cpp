#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int total_subs = 0;

        total_subs += n/6;

        if(total_subs%6)
            total_subs ++;

        cout<<total_subs*x<<endl;
    }
    return 0;
}