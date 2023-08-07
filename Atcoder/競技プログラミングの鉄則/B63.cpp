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
    int r,c;
    cin >> r >> c;
    int sy,sx,gy,gx;
    cin >> sx >> sy >> gx >> gy;
    sy--;sx--;gy--;gx--;
    vector<vector<char>>s(r,vector<char>(c));
    rep(i,r)rep(j,c)cin >> s[i][j];
    vector<vector<int>>G(r*c);
    vector<int>dis(r*c,-1);
    rep(i,r){
        rep(j,c-1){
            int id1=i*c+j;
            int id2=i*c+j+1;
            if(s[i][j]=='.' && s[i][j+1]=='.'){
                G[id1].push_back(id2);
                G[id2].push_back(id1);
            }
        }
    }

    rep(i,r-1){
        rep(j,c){
            int id1=i*c+j;
            int id2=(i+1)*c+j;
            if(s[i][j]=='.' && s[i+1][j]=='.'){
                G[id1].push_back(id2);
                G[id2].push_back(id1);
            }
        }
    }

    queue<int>que;
    que.push(sx*c+sy);
    dis[sx*c+sy]=0;
    
    while(!que.empty()){
        int pos=que.front();
        que.pop();
        for(int v:G[pos]){
            if(dis[v]==-1){
                dis[v]=dis[pos]+1;
                que.push(v);
            }
        }
    }

    cout << dis[gx*c+gy] << endl;
    return 0;
}