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
    vector<int>query(q),x(q);
    rep(i,q){
        cin >> query[i] >> x[i];
    }
    set<int>s;
    rep(i,q){
        if(query[i]==1)s.insert(x[i]);
        else if(query[i]==2)s.erase(x[i]);
        else{
            auto itr=lower_bound(ALL(s),x[i]);
            if(itr!=s.end())cout << *itr << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}