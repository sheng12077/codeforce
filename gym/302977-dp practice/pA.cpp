#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 100005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int ans=2;
    if(n%2==1){
        cout<<0<<endl;
    }
    else{
        for(int i=0;i<n/2-1;i++){
            ans*=2;
        }
        cout<<ans;
    }
}
