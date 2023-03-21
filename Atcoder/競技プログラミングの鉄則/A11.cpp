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



int search(int n,int x,vector<int> &A){
    int l=-1,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(A[m]==x) return m;
        if(x<A[m])r=m-1;
        if(x>A[m])l=m+1;
    }
    return -1;
}

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    int ans=search(n,x,A);
    cout << ans+1 << endl;
    return 0;
}