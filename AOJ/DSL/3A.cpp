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
    int n,q;
    cin >> n >> q;
    vector<ll>a(n);
    rep(i,n)cin >> a[i];

    rep(i,q){
        ll x;
        cin >> x;

        int right=0;
        ll sum=0;
        ll ans=0;
        rep(left,n){
            while(right<n && sum+a[right]<=x){
                sum+=a[right];
                right++;
            }
            ans+=right-left;
            if(left==right){
                right++;
            }else{
                sum-=a[left];
            }
        }
        cout << ans << endl;
    }
    return 0;
}