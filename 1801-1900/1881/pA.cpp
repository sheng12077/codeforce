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

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        vector<string>tmp;
        tmp.push_back(x);
        for(int i=0;i<8;i++){
            x+=x;
            tmp.push_back(x);
        }
        int ans=0;
        for(int i=0;i<tmp.size();i++){
            if(tmp[i].size()>=s.size()){
                if(tmp[i].find(s)<x.size()){
                    ans=i;
                    break;
                }
                else{
                    ans=-1;
                }
            }
        }
        cout<<ans<<endl;
        // cout<<tmp[2]<<endl;
    }
}
