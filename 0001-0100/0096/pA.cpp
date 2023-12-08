#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007
#define mem(x) memset(x,0,sizeof(x))

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int n=s.size();

    int cnt=1;
    int ans=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        ans=max(ans,cnt);
    }
    if(ans>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
