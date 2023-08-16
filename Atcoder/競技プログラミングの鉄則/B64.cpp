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
        a--;
        b--;
        G[a].push_back(make_pair(b,c));
        G[b].push_back(make_pair(a,c));
    }

    vector<bool>seen(n,false);
    vector<int>dis(n,inf);
    priority_queue<P,vector<P>,greater<P>>que;
    dis[0]=0;
    que.push(make_pair(dis[0],0));

    while(!que.empty()){
        int pos=que.top().second;
        que.pop();
        if(seen[pos])continue;
        seen[pos]=true;
        rep(i,G[pos].size()){
            int next=G[pos][i].first;
            int cost=G[pos][i].second;
            if(dis[next]>dis[pos]+cost){
                dis[next]=dis[pos]+cost;
                que.push(make_pair(dis[next],next));
            }
        }
    }

    vector<int>ans;
    int pos=n-1;
    while (true){
        ans.push_back(pos+1);
        if(pos==0)break;

        rep(i,G[pos].size()){
            int next=G[pos][i].first;
            int cost=G[pos][i].second;
            if(dis[next]+cost==dis[pos]){
                pos=next;
                break;
            }
        }
    }
    reverse(ALL(ans));
    for(int v:ans){
        cout << v << ' ';
    }
    cout << endl;
    return 0;
}