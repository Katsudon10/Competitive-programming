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
    vector<string>s(n);
    vector<int>p(n);
    rep(i,n)cin >> s[i] >> p[i];
    ll c=0;
    rep(i,n)c+=p[i];
    string S="atcoder";
    rep(i,n){
        if(p[i]*2>c)S=s[i];
    }
    cout << S << endl;
    return 0;
}