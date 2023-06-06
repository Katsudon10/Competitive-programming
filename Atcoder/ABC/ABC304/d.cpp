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
    int w,h;
    cin >> w >> h;
    int n;
    cin >> n;
    vector<int>p(n),q(n);
    rep(i,n)cin >> p[i] >> q[i];
    int A;
    cin >> A;
    vector<int>a(A);
    rep(i,A)cin >> a[i];
    int B;
    cin >> B;
    vector<int>b(B);
    rep(i,B)cin >> b[i];

    map<P,int>mp;
    rep(i,n){
        int x=lower_bound(ALL(a),p[i])-a.begin();
        int y=lower_bound(ALL(b),q[i])-b.begin();
        mp[P(x,y)]++;
    }

    int m=inf,M=0;
    for(auto e:mp){
        m=min(m,e.second);
        M=max(M,e.second);
    }

    if(mp.size()< ll(A+1)*(B+1))m=0;

    cout << m << ' ' << M << endl;

    return 0;
}