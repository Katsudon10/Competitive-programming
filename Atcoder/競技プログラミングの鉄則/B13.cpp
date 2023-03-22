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
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    int right=0;
    ll ans=0;
    ll num=0;
    rep(left,n){
        while(right<n && num+a[right]<=k){
            num+=a[right];
            right++;
        }
        ans+=right-left;
        if(left==right){
            right++;
        }else{
            num-=a[left];
        }
    }
    cout << ans << endl;
    return 0;
}