#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k;
    int ans=0;
    cin>>n>>k;
    while(n--){
        int input;
        cin>>input;
        if(input>k){
            ans++;
        }
    }

    cout<<ans;
}
