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
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int>l(q),r(q);
    rep(i,q)cin >> l[i] >> r[i];
    rep(i,q){
        l[i]--;
        r[i]--;
    }
    vector<int>cnt(n,0);
    rep(i,n-1){
        if(s[i]==s[i+1]){
            cnt[i+1]=1;
        }
    }
    rep(i,n-1)cnt[i+1]+=cnt[i];

    rep(i,q){
        cout << cnt[r[i]]-cnt[l[i]] << endl;
    }
    return 0;
}