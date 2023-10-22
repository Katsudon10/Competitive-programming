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
    int x,n;
    cin >> x >> n;
    vector<int>p(n);
    rep(i,n)cin >> p[i];
    set<int>st;
    rep(i,n)st.insert(p[i]);
    int ans=0;
    int m=inf;
    for(int i=0;i<=102;i++){
        if(!st.count(i)){
            if(m>abs(x-i)){
                m=abs(x-i);
                ans=i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}