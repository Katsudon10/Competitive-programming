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

struct Edge{
    int to,x,y;
    Edge(int to=-1,int x=0,int y=0):to(to),x(x),y(y){}
};

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<Edge>>G(n);
    rep(i,m){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        a--;b--;
        G[a].emplace_back(b,x,y);
        G[b].emplace_back(a,-x,-y);
    }

    ll INF=1e18;
    vector<ll>x(n,INF),y(n,INF);
    x[0]=y[0]=0;

    queue<int>q;
    q.push(0);
    while(!q.empty()){
        int v=q.front();q.pop();
        for(auto [u,dx,dy]:G[v]){
            if(x[u]!=INF)continue;
            x[u]=x[v]+dx;
            y[u]=y[v]+dy;
            q.push(u);
        }
    }

    rep(i,n){
        if(x[i]==INF)cout << "undecidable" << '\n';
        else cout << x[i] << ' ' << y[i] << '\n';
    }
    return 0;
}