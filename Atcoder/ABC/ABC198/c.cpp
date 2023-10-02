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
    ll r,x,y;
    cin >> r >> x >> y;
    
    ll d=x*x+y*y;
    ll ans=1;
    while(1){
        if(r*r*ans*ans>=d)break;
        ++ans;
    }
    if(ans==1 && r*r!=d)ans=2;
    cout << ans << endl;
    return 0;
}