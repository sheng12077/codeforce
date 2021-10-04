#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s,f;
    cin>>s>>f;
    reverse(f.begin(),f.end());
    if(s==f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
