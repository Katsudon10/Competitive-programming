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
    map<int,int>mp;

    ll ans=0;
    rep(i,n){
        int a;
        cin >> a;
        mp[a]++;
        ans+=a;
    }
    int q;
    cin >> q;
    rep(i,q){
        int b,c;
        cin >> b >> c;
        mp[c]+=mp[b];
        ans+=c*mp[b]-b*mp[b];
        mp[b]=0;
        cout << ans << endl;
    }
    
    return 0;
}