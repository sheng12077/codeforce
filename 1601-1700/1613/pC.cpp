#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    int arr[maxn];
    while(t--){
        int n,h;
        cin>>n>>h;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int left=0;
        int right=1e18;
        while(left<right){
            int middle=(left+right)/2;
            int ans=middle;
            for(int i=1;i<n;i++){
                ans+=min(middle,arr[i+1]-arr[i]);
            }
            if(ans>=h){
                right=middle;
            }
            else{
                left=middle+1;
            }
        }
        cout<<left<<endl;
    }
}
