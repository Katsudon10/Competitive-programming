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
    vector<vector<int>>X(1509,vector<int>(1509)),N(1509,vector<int>(1509,0));
    rep(i,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        X[a][b]++;
        X[a][d]--;
        X[c][b]--;
        X[c][d]++;
    }

    for(int i=0;i<=1500;i++){
        for(int j=1;j<=1500;j++){
            X[i][j]=X[i][j-1]+X[i][j];
        }
    }

    for(int i=1;i<=1500;i++){
        for(int j=0;j<=1500;j++){
            X[i][j]=X[i-1][j]+X[i][j];
        }
    }

    int ans=0;
    for(int i=0;i<=1500;i++){
        for(int j=0;j<=1500;j++){
            if(X[i][j]>=1)ans++;
        }
    }
    cout << ans << endl;
    return 0;
}