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
    int q;
    cin >> q;
    vector<int>query(q),y(q);
    vector<string>x(q);
    rep(i,q){
        cin >> query[i];
        if(query[i]==1)cin >> x[i] >> y[i];
        else cin >> x[i];
    }
    map<string,int>mp;
    rep(i,q){
        if(query[i]==1)mp[x[i]]=y[i];
        else cout << mp[x[i]] << endl;
    }
    return 0;
}