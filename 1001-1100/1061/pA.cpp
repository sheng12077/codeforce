#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

   int n,s;
   int ans=0;
   cin>>n>>s;
   for(int i=n;i>0;i--){
       ans+=s/i;
       s%=i;
   }
   cout<<ans;
}
