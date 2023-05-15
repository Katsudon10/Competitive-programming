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

ll solve(int n,int a,int b,vector<int> &A,vector<int> &B){
    ll cnt=0;
    rep(i,n){
        if((ll)(a*A[i]+b*B[i])>=0)cnt+=(ll)(a*A[i]+b*B[i]);
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<int>A(n),B(n);
    rep(i,n)cin >> A[i] >> B[i];

    ll ans1=solve(n,1,1,A,B);
    ll ans2=solve(n,1,-1,A,B);
    ll ans3=solve(n,-1,1,A,B);
    ll ans4=solve(n,-1,-1,A,B);
    cout << max({ans1,ans2,ans3,ans4}) << endl;
    return 0;
}