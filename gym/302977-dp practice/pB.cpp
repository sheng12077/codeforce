#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 200005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int dp[maxn];
    dp[0]=0;dp[1]=1;

    //vector c: the letter 
    vector<int>c;
    //vector a: the length of every interval
    vector<int>a;

    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    for(int i=0;i<k;i++){
        char v;
        cin>>v;
        c.push_back(v);
    }

    int tmp=0;
    int l=0;
    //l: max dp length
    int ans=0;
    for(int i=0;i<n+1;i++){
        bool flag=false;
        for(int j=0;j<c.size();j++){
            if(str[i]==c[j]){
                flag=true;
            }
        }
        if(flag){
            tmp++;
        }
        else{
            a.push_back(tmp);
            l=max(l,tmp);
            tmp=0;
        }
    }



    for(int i=2;i<=l;i++){
        dp[i]=dp[i-1]+i;
    }

    cout<<endl;
    for(int i=0;i<a.size();i++){
        int t=a[i];
        ans+=dp[t];
    }
    cout<<ans;
}  
