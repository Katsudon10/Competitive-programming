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

int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n+1);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int>dis(n+1,-1);
    dis[1]=0;
    queue<int>que;
    que.push(1);
    while(!que.empty()){
        int pos=que.front();
        que.pop();
        for(int v:G[pos]){
            if(dis[v]!=-1)continue;
            dis[v]=dis[pos]+1;
            que.push(v);
        }
    }
    for(int i=1;i<=n;i++){
        cout << dis[i] << endl;
    }
    return 0;
}