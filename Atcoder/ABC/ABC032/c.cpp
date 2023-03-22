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
    vector<int>s(n);
    rep(i,n)cin >> s[i];
    rep(i,n){
        if(s[i]==0){
            cout << n << endl;
            return 0;
        }
    }
    int right=0;
    int ans=0;
    ll sum=1;
    rep(left,n){
        while(right<n && sum*s[right]<=k){
            sum*=s[right];
            right++;
        }
        ans=max(ans,right-left);
        if(left==right){
            right++;
        }else{
            sum/=s[left];
        }
    }
    cout << ans << endl;
    return 0;
}