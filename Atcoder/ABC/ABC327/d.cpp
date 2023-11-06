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
    vector<int>a(m),b(m);
    rep(i,m){
        cin >> a[i];
        a[i]--;
    }
    rep(i,m){
        cin >> b[i];
        b[i]--;
    }
    Graph G(n);

    rep(i,m)G[a[i]].push_back(b[i]);

    rep(i,n){
        queue<int>que;
        que.push(i);
        vector<bool>seen(n,false);
        seen[i]=true;
        while(!que.empty()){
            int v=que.front();
            que.pop();
            for(int vf:G[v]){
                if(vf==i){
                    cout << "No" << endl;
                    return 0;
                }
                if(seen[vf])continue;
                seen[vf]=true;
                que.push(vf);
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}