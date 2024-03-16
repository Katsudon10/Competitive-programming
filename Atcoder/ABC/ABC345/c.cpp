#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
struct Edge{
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
};
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    string s;
    cin >> s;
    ll ans=0;
    vector<int>cnt(26,0);
    for(char c:s)cnt[c-'a']++;
    int n=s.size();
    rep(i,n){
        char c=s[i];
        ans+=n-cnt[c-'a']-i;
        cnt[c-'a']--;
    }
    if(ans==0)ans=1;
    cout << ans << endl;
    return 0;
}
