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
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<int>>X(h+2,vector<int>(w+2,0)),N(h+2,vector<int>(w+2,0));
    rep(i,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        X[a][b]++;
        X[c+1][d+1]++;
        X[a][d+1]--;
        X[c+1][b]--;
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            N[i][j]=N[i][j-1]+X[i][j];
        }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            N[i][j]=N[i-1][j]+N[i][j];
        }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(j!=1)cout << ' ';
            cout << N[i][j];
        }
        cout << endl;
    }
    return 0;
}