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
    int n;
    cin >> n;
    vector<vector<int>>a(n,vector<int>(n));
    rep(i,n)rep(j,n)cin >> a[i][j];

    rep(i,n){
        rep(j,n){
            if(a[i][j]==1)cout << j+1 << ' ';
        }
        cout << endl;
    }
    return 0;
}