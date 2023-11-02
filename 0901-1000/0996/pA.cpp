#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 10007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin>>n;
    int ans=0;
    while(n>=100){
        ans+=n/100;
        n=n%100;
    }
    while(n>=20){
        ans+=n/20;
        n=n%20;
    }
    while(n>=10){
        ans+=n/10;
        n=n%10;
    }
    while(n>=5){
        ans+=n/5;
        n=n%5;
    }
    ans+=n;
    cout<<ans;
}
