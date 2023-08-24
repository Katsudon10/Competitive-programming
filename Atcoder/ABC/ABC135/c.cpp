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
    vector<int>A(n+1),B(n);
    rep(i,n+1)cin >> A[i];
    rep(i,n)cin >> B[i];

    ll ans=0;
    int temp=0;
    rep(i,n+1){
        if(i!=0){
            ans+=min(temp,A[i]);
            A[i]-=min(temp,A[i]);
        }
        if(i!=n){
            int m=min(A[i],B[i]);
            ans+=m;
            temp=B[i]-m;
        }
    }
    cout << ans << endl;
    return 0;
}