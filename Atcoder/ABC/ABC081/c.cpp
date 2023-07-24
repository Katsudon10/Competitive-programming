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
    int n,k;
    cin >> n >> k;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    map<int,int>mp;
    rep(i,n){
        mp[A[i]]++;
    }
    vector<int>v;
    for(auto it=mp.begin();it!=mp.end();it++){
        v.push_back(it->second);
    }
    sort(ALL(v));
    int ans=0;
    if(v.size()<=k){
        cout << 0 << endl;
        return 0;
    }else{
        rep(i,v.size()-k)ans+=v[i];
    }
    cout << ans << endl;
    return 0;
}