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
    int m,d;
    cin >> m >> d;
    ll ans=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=d;j++){
            int d1=j%10,d2=j/10;
            if(d1>=2 && d2>=2 && d1*d2==i)ans++;
        }
    }
    cout << ans << endl;
    return 0;
}