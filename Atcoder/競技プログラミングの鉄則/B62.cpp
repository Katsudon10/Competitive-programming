#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

stack<int>st,Ans;
int n;

void dfs(int v,vector<vector<int>> &G,vector<bool> &visited){
    if(v==n){
        Ans=st;
        return;
    }
    visited[v]=true;
    for(int vs:G[v]){
        if(visited[vs])continue;
        st.push(vs);
        dfs(vs,G,visited);
        st.pop();
    }
    return;
}

int main(){
    int m;
    cin >> n >> m;
    Graph G(n+1);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<bool>visited(n+1,false);
    st.push(1);
    dfs(1,G,visited);
    vector<int>ans;
    while(!Ans.empty()){
        ans.push_back(Ans.top());
        Ans.pop();
    }
    reverse(ALL(ans));
    for(int v:ans){
        cout << v << ' ';
    }
    cout << endl;
    return 0;
}