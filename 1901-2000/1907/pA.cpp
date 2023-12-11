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

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        char row=s[0];
        char col=s[1];
        for(char i='1';i<='8';i++){
            if(i!=col){
                cout<<row<<i<<endl;
            }
        }
        for(char i='a';i<='h';i++){
            if(i!=row){
                cout<<i<<col<<endl;
            }
        }
    }
}
