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
    double cnt=0;
    rep(i,n){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        double cc=a+b+c+d+e*110/900.0;
        if(cc>cnt)cnt=cc;
    }
    cout << fixed << setprecision(10) << cnt << endl;
    return 0;
}