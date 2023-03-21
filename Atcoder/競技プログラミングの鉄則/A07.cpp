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
    int d,n;
    cin >> d >> n;
    vector<int>p(d+1,0);
    rep(i,n){
        int l,r;
        cin >> l >> r;
        p[l]++;
        p[r+1]--;
    }
    int ans=0;
    for(int i=1;i<=d;i++){
        ans+=p[i];
        cout << ans << endl;
    }
    return 0;
}