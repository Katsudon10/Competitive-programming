#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
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
    vector<int>B(n-1);
    rep(i,n-1)cin >> B[i];
    vector<int>A(n);
    rep(i,n){
        if(i==0){
            A[i]=B[0];
        }else if(i==n-1){
            A[i]=B[n-2];
        }else{
            A[i]=min(B[i],B[i-1]);
        }
    }
    int ans=0;
    rep(i,n)ans+=A[i];
    cout << ans << endl;
    return 0;
}