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

int gcd(int a,int b){
    if(a%b==0)return b;
    else return gcd(b,a%b);
}

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    rep(i,n)cin >> a[i];

    int ans=0;
    rep(i,n)ans=gcd(ans,abs(a[i]-x));
    cout << ans << endl;
    return 0;
}