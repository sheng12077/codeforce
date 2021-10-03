#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

vector<int>graph[2005];
bool vis[2005];
int height[2005];
int MaxHeight=1;  
vector<int>roots;             //存根，把所有根丟下去搜

void bfs(int pos){
    vis[pos]=1;
    queue<int>que;
    que.push(pos);
    while(!que.empty()){
        int parent=que.front();
        que.pop();
        for(auto child:graph[parent]){
            if(!vis[child]){                        //沒走過
                vis[child]=1;                       //改成已走訪 
                height[child]=height[parent]+1;     //父節點的高度+1
                MaxHeight=max(MaxHeight,height[child]);
                que.push(child);                    //丟下去繼續搜
            }
        }
    }
    return;
}

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a!=-1){
            graph[a-1].push_back(i);       //轉0-base
        }
        else{
            roots.push_back(i);
        }
    }
    memset(vis,0,sizeof(vis));
    memset(height,0,sizeof(height));
    for(auto root:roots){               //把所有根丟下去搜
        height[root]=1;
        bfs(root);
    }
    cout<<MaxHeight;
}
