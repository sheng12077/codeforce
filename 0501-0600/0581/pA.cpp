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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int len=1;
    int ans=1;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            len++;
        }
        else{
            ans=max(ans,len);
            len=1;
        }
        ans=max(ans,len);
    }
    cout<<ans;
}
