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
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    sort(ALL(a));
    int ans=0;
    rep(i,n){
        if(i==n-1){
            if(x==a[i])ans++;
        }else{
            if(x>=a[i]){
                ans++;
                x-=a[i];
            }
        }
    }
    cout << ans << endl;
    return 0;
}