#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 1e8
#define maxn 200005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    
    int n;
    cin>>n;
    int dp[n+1][8];
    for(int i=0;i<=n;i++){
        for(int j=0;j<8;j++){
            dp[i][j]=inf;
        }
    }
    dp[0][0]=0;
    int ans=inf;
    for(int i=0;i<n;i++){
        int cost;
        string str;
        cin>>cost>>str;
        int str_mask=0;
        for(int pos=0;pos<3;pos++){
            char c='C'-pos;
            bool flag=0;
            for(char d:str){
                if(c==d){
                    flag=1;
                }
            }
            if(flag){
                str_mask+=(1<<pos);
            }
        }
        for(int mask=0;mask<8;mask++){
            dp[i+1][mask]=min(dp[i+1][mask],dp[i][mask]);
            dp[i+1][mask | str_mask]=min(dp[i+1][mask | str_mask],dp[i][mask]+cost);
        }
    }
    ans=dp[n][7];
    if (ans==inf){
        cout<<-1;
    }
    else{
        cout<<ans;
    }
}
