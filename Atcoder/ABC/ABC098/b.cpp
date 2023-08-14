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
    string s;
    cin >> n >> s;
    int ans=0;
    set<char>sc;
    rep(i,n-1){
        sc.insert(s[i]);
        int tn=s.size()-i-1;
        string ts=s.substr(i+1,tn);
        set<char>tc;
        int cnt=0;
        rep(j,tn){
            if(!tc.count(ts[j]) && sc.count(ts[j]))cnt++;
            tc.insert(ts[j]);
        }
        ans=max(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}