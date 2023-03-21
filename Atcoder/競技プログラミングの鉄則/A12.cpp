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

bool check(int n,int x,int k,vector<int> &A){
    ll sum=0;
    rep(i,n)sum+=x/A[i];
    if(sum>=k)return true;
    return false;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    int l=1,r=1000000000;
    while(l<r){
        ll mid=l+(r-l)/2;
        bool ans=check(n,mid,k,A);
        if(!ans)l=mid+1;
        if(ans)r=mid;
    }
    cout << l << endl;
    return 0;
}