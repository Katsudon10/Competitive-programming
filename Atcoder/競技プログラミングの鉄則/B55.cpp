#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
const ll linf = LLONG_MAX;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    ll q;
    cin >> q;
    vector<ll>query(q),x(q);
    rep(i,q)cin >> query[i] >> x[i];
    set<ll>s1,s2;
    rep(i,q){
        if(query[i]==1){
            s1.insert(x[i]);
            s2.insert(-x[i]);
        }else{
            auto itr1=s1.lower_bound(x[i]);
            auto itr2=s2.lower_bound(-x[i]);
            if(itr1==s1.end() && itr2==s2.end()){
                cout << -1 << endl;
            }else if(itr1==s1.end()){
                cout << abs(-1*(*itr2)-x[i]) << endl;
            }else if(itr2==s2.end()){
                cout << abs((*itr1)-x[i]) << endl;
            }else{
                ll ans=min(abs(*itr1-x[i]),abs(-1*(*itr2)-x[i]));
                cout << ans << endl;
            }
        }
    }
    return 0;
}