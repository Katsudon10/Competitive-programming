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

int main(){
    int n;
    cin >> n;
    vector<P>p(n);
    vector<int>L(n),R(n);
    rep(i,n){
        int l,r;
        cin >> l >> r;
        p[i]=P(r,l);
    }

    sort(ALL(p));
    rep(i,n){
        L[i]=p[i].second;
        R[i]=p[i].first;
    }

    int ans=0,time=0;
    rep(i,n){
        if(time<=L[i]){
            time=R[i];
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}