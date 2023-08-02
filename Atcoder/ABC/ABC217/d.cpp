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
    int l,q;
    cin >> l >> q;
    set<int>s;
    s.insert(0);
    s.insert(l);
    rep(i,q){
        int c,x;
        cin >> c >> x;
        if(c==1){
            s.insert(x);
        }else{
            auto it=s.lower_bound(x);
            cout << *it - *prev(it) << endl;
        }
    }
    return 0;
}