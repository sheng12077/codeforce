#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 10005
#define mod 1000000007

int tree1[maxn];
int tree2[maxn];

void initialise(int n,int vec[]){
    for (int i=0;i<n;i++){
        vec[i]=i;
    }
}

int find(int x,int vec[]){
    if (vec[x]==x){
        return x;
    }
    else{
        return vec[x]=find(vec[x],vec);
    }
}

void merge (int x,int y,int vec[]){
    int x_root=find(x,vec);
    int y_root=find(y,vec);
    vec[x_root]=y_root;   
}


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m1,m2;
    cin>>n>>m1>>m2;
    initialise(n,tree1);
    initialise(n,tree2);
    while(m1--){
        int u,v;
        cin>>u>>v;
        merge(u,v,tree1);    
    }
    while(m2--){
        int u,v;
        cin>>u>>v;
        merge(u,v,tree2);
    }
    int ans=0;
    vector<vector<int>>ans_list;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(find(i,tree1)!=find(j,tree1) and find(i,tree2)!=find(j,tree2)){
                merge(i,j,tree1);
                merge(i,j,tree2);
                ans_list.push_back({i,j});
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    for(auto it:ans_list){
        cout<<it[0]<<" "<<it[1]<<endl;
    }
}

