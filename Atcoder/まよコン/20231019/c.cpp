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
    vector<vector<bool>>x(n,vector<bool>(n,false));
    vector<vector<bool>>y(n,vector<bool>(n,false));

    rep(i,m){
        int a,b;
        cin >> a >> b;
        --a;--b;
        x[a][b]=x[b][a]=true;
    }
    rep(i,m){
        int c,d;
        cin >> c >> d;
        --c;--d;
        y[c][d]=y[d][c]=true;
    }

    vector<int>p(n);
    rep(i,n)p[i]=i;
    do{
        vector<vector<bool>>g(n,vector<bool>(n,false));
        rep(i,n)rep(j,n)g[i][j]=x[p[i]][p[j]];
        if(g==y){
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(ALL(p)));
    cout << "No" << endl;
    return 0;
}