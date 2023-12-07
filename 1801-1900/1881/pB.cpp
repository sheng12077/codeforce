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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b and b==c and a==c){
            cout<<"YES"<<endl;
        }
        else{
            vector<int>tmp;
            tmp.push_back(a);
            tmp.push_back(b);
            tmp.push_back(c);
            sort(tmp.begin(),tmp.end());
            int l=tmp[0];
            int r=tmp[tmp.size()-1];
            for(int i=0;i<3;i++){
                l=tmp[0];
                r=tmp[tmp.size()-1];
                tmp.pop_back();
                tmp.push_back(r-l);
                tmp.push_back(l);
                sort(tmp.begin(),tmp.end());
                l=tmp[0];
                r=tmp[tmp.size()-1];
                if(l==r){
                    break;
                }
            }
            l=tmp[0];
            r=tmp[tmp.size()-1];
            if(l==r){
                cout<<"YES"<<endl;
            } 
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
