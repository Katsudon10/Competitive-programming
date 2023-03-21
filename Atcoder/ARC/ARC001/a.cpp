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
    string s;
    cin >> s;
    vector<int>ans(4,0);
    rep(i,n)ans[(s[i]-'0')-1]++;
    sort(ALL(ans));
    cout << ans[3] << ' ' << ans[0] << endl;
    return 0;
}