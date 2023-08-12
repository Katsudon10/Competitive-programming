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
    cin >> n;
    vector<set<P>>st;
    rep(i,n){
        int c;
        cin >> c;
        rep(j,c){
            int a;
            cin >> a;
            st[a].insert(P(c,i+1));
        }
    }
    int x;
    cin >> x;
    for(auto v:st[x]){
        cout << v.second << endl;
    }
    return 0;
}