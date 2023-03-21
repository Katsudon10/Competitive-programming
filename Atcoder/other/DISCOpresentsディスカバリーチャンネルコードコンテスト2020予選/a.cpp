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
    int x,y;
    cin >> x >> y;
    int ans=0;
    if(x==1 && y==1)ans+=400000;
    if(x==1)ans+=300000;
    if(x==2)ans+=200000;
    if(x==3)ans+=100000;
    if(y==1)ans+=300000;
    if(y==2)ans+=200000;
    if(y==3)ans+=100000;
    cout << ans << endl;
    return 0;
}