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
    vector<vector<P>>G(n);
    rep(i,m){
        int a,b,c;
        cin >> a >> b >> c;
        a--;b--;
        G[a].push_back(make_pair(b,c));
        G[b].push_back(make_pair(a,c));
    }

    ll ans=0;
    rep(i,n){
        vector<bool>seen(n,false);
        seen[i]=true;
        queue<P>que;
        if(G[i].size()==0)continue;
        que.push(G[i].front());
        vector<ll>dist(n,-inf);
        
        dist[i]=0;
        queue<int>posp;
        posp.push(i);
        while(!que.empty()){
            int pos=que.front().first;
            que.pop();
            int pos2=posp.front();
            posp.pop();
            if(seen[pos])continue;
            seen[pos]=true;
            dist[pos]=max(dist[pos],dist[pos2]+que.front().second);
            rep(j,G[pos].size()){
                que.push(G[pos][j]);
                posp.push(pos);
            }
        }
        sort(dist.rbegin(),dist.rend());
        ans=max(ans,dist[0]);
    }
    
    cout << ans << endl;
    return 0;
}