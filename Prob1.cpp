#include <bits/stdc++.h>
using namespace std;

void main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y)
            cout<<x-y<<endl;
        else
            cout<<0<<endl;
    }
}