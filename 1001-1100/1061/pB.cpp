#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

   int n,m;
   cin>>n>>m;
   int arr[n+1];
   int total_blocks=0;
   for(int i=1;i<=n;i++){
       cin>>arr[i];
       total_blocks+=arr[i];
   }
   sort(arr+1,arr+1+n);
   int max_height=0;
   int remain_block=0;
   for(int i=1;i<=n;i++){
       remain_block++;
       if(arr[i]>max_height){
           max_height++;
       }
   }
   remain_block+=(arr[n]-max_height);
   int ans=total_blocks-remain_block;
   cout<<ans;
   exit(0);
}
