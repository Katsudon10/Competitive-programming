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
    vector<pair<pair<string,int>,int>>p(n);
    rep(i,n){
        string s;
        int a;
        cin >> s >> a;
        p[i]=make_pair(make_pair(s,-a),i);
    }
    sort(ALL(p));
    rep(i,n){
        cout << p[i].second+1 << endl;
    }
    return 0;
}