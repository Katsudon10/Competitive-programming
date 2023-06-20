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
    int n,k,x;
    cin >> n >> k >> x;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<int>B(n);
    ll cnt=0,sum=0;
    rep(i,n){
        cnt+=A[i]/x;
        B[i]=A[i]%x;
        sum+=A[i];
    }
    
    if(cnt>=k){
        sum-=(ll)k*x;
    }else{
        sum-=(ll)cnt*x;
        k-=cnt;
        n=min(n,k);
        sort(B.rbegin(),B.rend());
        rep(i,n){
            sum-=B[i];
        }
    }
    cout << sum << endl;
    return 0;
}