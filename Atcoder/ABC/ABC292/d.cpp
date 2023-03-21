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

void rec(int v,vector<bool> &seen,vector<vector<int>> &G,int &num,int &vn){
    seen[v]=true;
    vn++;
    for(int v2:G[v]){
        num++;
        if(seen[v2])continue;
        rec(v2,seen,G,num,vn);
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    Graph G(n);
    vector<bool>seen(n,false);

    rep(i,m){
        int u,v;
        cin >> u >> v;
        u--;v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    rep(i,n){
        int num=0,vn=0;
        if(seen[i])continue;
        rec(i,seen,G,num,vn);
        //cout << num/2 << ' ' << vn << endl;
        if(vn!=num/2){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}