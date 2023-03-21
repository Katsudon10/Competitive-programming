#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<bool>seen(n,false);
    int ans=0;

    rep(i,n){
        if(!seen[i]){
            ans++;
            queue<int>que;
            que.push(i);

            while(!que.empty()){
                int v=que.front();
                que.pop();

                for(int next_v:G[v]){
                    if(!seen[next_v]){
                        seen[next_v]=true;
                        que.push(next_v);
                    }
                }
            }
        }
    }
    cout << m-n+ans << endl;
    return 0;
}