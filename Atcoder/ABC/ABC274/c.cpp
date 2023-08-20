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
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<int>ans(2*n+1,0);
    rep(i,n){
        ans[2*i+1]=ans[A[i]-1]+1;
        ans[2*i+2]=ans[A[i]-1]+1;
    }
    rep(i,2*n+1){
        cout << ans[i] << endl; 
    }
    return 0;
}