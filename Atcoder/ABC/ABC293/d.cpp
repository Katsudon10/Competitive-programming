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
    Graph G(n);
    vector<int>deg(n);
    rep(i,m){
        int a,c;
        char b,d;
        cin >> a >> b >> c >> d;
        a--;c--;
        G[a].push_back(c);
        G[c].push_back(a);
        deg[a]++;deg[c]++;
    }
    int x=0,y=0;
    vector<bool>used(n,false);
    rep(i,n){
        if(!used[i]){
            queue<int>que;
            used[i]=true;
            que.push(i);
            bool flag=true;
            while(!que.empty()){
                int q=que.front();que.pop();
                if(deg[q]!=2)flag=false;
                for(int v:G[q]){
                    if(!used[v]){
                        que.push(v);
                        used[v]=true;
                    }
                }
            }
            if(flag)x++;
            else y++;
        }
    }
    cout << x << ' ' << y << endl;
    return 0;
}