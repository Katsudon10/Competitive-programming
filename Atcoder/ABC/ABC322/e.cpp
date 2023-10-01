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
    int n,k,p;
    cin >> n >> k >> p;
    vector<int>c(n);
    vector<vector<int>>a(n,vector<int>(k));
    rep(i,n){
        cin >> c[i];
        rep(j,k){
            cin >> a[i][j];
        }
    }

    
    return 0;
}