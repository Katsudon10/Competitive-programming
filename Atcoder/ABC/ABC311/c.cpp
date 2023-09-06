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
//A[i].erase(unique(ALL(A[i])),A[i].end());

stack<int>st;

bool dfs(Graph &G,int n,vector<bool> &seen){
    st.push(n);
    seen[n]=true;
    for(int v:G[n]){
        if(seen[v]){
            return true;
        }else{
            dfs(G,v,seen);
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int>a(n+1);
    rep(i,n)cin >> a[i+1];
    vector<int>id(n+1);
    int k=1;
    int v=1;
    while(id[v]==0){
        id[v]=k;
        k++;
        v=a[v];
    }

    vector<int>ans;
    int l=k-id[v];
    rep(i,l){
        ans.push_back(v);
        v=a[v];
    }
    cout << ans.size() << endl;
    for(int v:ans)cout << v << ' ';
    cout << endl;
    return 0;
}