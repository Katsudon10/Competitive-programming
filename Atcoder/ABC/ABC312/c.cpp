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
    int n,m;
    cin >> n >> m;
    vector<int>A(n),B(m);
    rep(i,n)cin >> A[i];
    rep(i,m)cin >> B[i];

    map<int,int>mp;
    rep(i,n)mp[A[i]]++;
    sort(ALL(B));
    int cnt=0;
    int ans=B.back()+1;
    for(auto p:mp){
        cnt+=p.second;
        int c=B.end()-lower_bound(ALL(B),p.first);
        cout << c << endl;
        int e=lower_bound(ALL(B),p.first)-B.begin();
        if(cnt>=c){
            ans=min(ans,p.first);
        }
    }
    cout << ans << endl;
    return 0;
}