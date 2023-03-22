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
    vector<int>a(n);
    rep(i,n)cin >> a[i];

    int right=1;
    ll ans=0;
    rep(left,n){
        while(right<n && (right==left || a[right-1]<a[right])){
            right++;
        }
        ans+=right-left;
        if(left==right){
            right++;
        }
    }
    cout << ans << endl;
    return 0;
}