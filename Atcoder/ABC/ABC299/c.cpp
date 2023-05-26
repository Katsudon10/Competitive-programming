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
    string s;
    cin >> n >> s;
    ll ans=0;
    rep(i,2){
        ll cnt=0;
        rep(j,n){
            if(s[j]=='o')cnt++;
            else{
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        reverse(ALL(s));
    }
    if(ans>0){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
    
    return 0;
}