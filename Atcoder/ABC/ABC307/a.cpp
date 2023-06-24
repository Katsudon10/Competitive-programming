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
    vector<int>A(7*n);
    rep(i,7*n)cin >> A[i];
    rep(i,n){
        int ans=0;
        rep(j,7){
            ans+=A[i*7+j];
        }
        cout << ans << ' ';
    }
    cout << endl;
    return 0;
}