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
int bfs(Graph &G,int v,int n){
    vector<int>dist(n,-1);
    queue<int>que;
    dist[v]=0;
    que.push(v);
    while(!que.empty()){
        int vv=que.front();
        que.pop();
        for(int vs:G[vv]){
            if(dist[vs]==-1){
                dist[vs]=dist[vv]+1;
                que.push(vs);
            }
        }
    }
    return *max_element(ALL(dist));
}

int main(){
    int n1,n2,m;
    cin >> n1 >> n2 >> m;
    int n=n1+n2;
    Graph G(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int ans=bfs(G,0,n)+bfs(G,n-1,n)+1;
    cout << ans << endl;
    return 0;
}