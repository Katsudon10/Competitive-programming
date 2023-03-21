#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>>A(m);
    rep(i,m){
        int c;
        cin >> c;
        rep(j,c){
            int a;
            cin >> a;
            A[i].push_back(a);
        }
    }
    int ans=0;
    for(int bit=0;bit<(1<<m);bit++){
        set<int>S;
        for(int i=0;i<m;i++){
            if(bit & (1<<i)){
                for(int x:A[i])S.insert(x);
            }
        }
        if(S.size()==n)ans++;
    }
    cout << ans << endl;
    return 0;
}