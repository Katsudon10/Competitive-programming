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
    int n,q;
    cin >> n >> q;
    vector<unordered_set<int>>to(n);
    int ans=n;
    rep(i,q){
        int query;
        cin >> query;
        if(query==1){
            int u,v;
            cin >> u >> v;
            u--;v--;
            if(to[u].size()==0)ans--;
            if(to[v].size()==0)ans--;
            to[u].insert(v);
            to[v].insert(u);
        }else{
            int v;
            cin >> v;
            v--;
            if(to[v].size()!=0){
                for(int u:to[v]){
                    to[u].erase(v);
                    if(to[u].size()==0)ans++;
                }
                to[v]=unordered_set<int>();
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}