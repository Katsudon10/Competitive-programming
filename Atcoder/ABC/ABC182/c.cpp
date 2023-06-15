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
    ll n;
    cin >> n;
    vector<int>cnt(3,0);
    while(n){
        cnt[n%10%3]++;
        n/=10;
    }
    ll ans=0;
    int cnt3=(cnt[1]+2*cnt[2])%3;
    int k=cnt[0]+cnt[1]+cnt[2];
    if(cnt3==0)ans=0;
    else if(cnt3==1){
        if(cnt[1]){
            if(k==1)ans=-1;
            else ans=1;
        }else{
            if(k==2)ans=-1;
            else ans=2;
        }
    }else{
        if(cnt[2]){
            if(k==1)ans=-1;
            else ans=1;
        }else{
            if(k==2)ans=-1;
            else ans=2;
        }
    }
    cout << ans << endl;
    return 0;
}