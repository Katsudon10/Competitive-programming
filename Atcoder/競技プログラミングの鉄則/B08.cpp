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

int main(){
    int n;
    cin >> n;
    int h=1501,w=1501;
    vector<vector<int>>X(h,vector<int>(w)),N(h,vector<int>(w,0));
    rep(i,n){
        int x,y;
        cin >> x >> y;
        X[x][y]++;
    }
    
    for(int i=1;i<h;i++){
        for(int j=1;j<w;j++){
            N[i][j]=N[i-1][j]+X[i][j];
        }
    }

    for(int i=1;i<h;i++){
        for(int j=1;j<w;j++){
            N[i][j]=N[i][j-1]+N[i][j];
        }
    }

    int q;
    cin >> q;
    rep(i,q){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << N[c][d]+N[a-1][b-1]-N[c][b-1]-N[a-1][d] << endl;
    }
    return 0;
}