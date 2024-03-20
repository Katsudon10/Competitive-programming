#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
struct Edge{
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
};
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    vector<vector<int>>c(3,vector<int>(3));
    rep(i,3)rep(j,3)cin >> c[i][j];
    
    vector<int>x(3),y(3);
    x[0]=0;
    rep(i,3)y[i]=c[0][i]-x[0];
    rep(i,3)x[i]=c[i][0]-y[0];

    bool flag=true;
    rep(i,3)rep(j,3){
        if(x[i]+y[j]!=c[i][j])flag=false;
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}