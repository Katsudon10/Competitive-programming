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
    int n,m;
    cin >> n >> m;
    vector<int>a(m);
    rep(i,m)cin >> a[i];
    vector<string>s(n);
    rep(i,n)cin >> s[i];

    vector<int>cnt(n);
    rep(i,n)cnt[i]=i+1;
    rep(i,n)rep(j,m)if(s[i][j]=='o')cnt[i]+=a[j];

    int mx=*max_element(ALL(cnt));
    rep(i,n){
        vector<int>x;
        rep(j,m)if(s[i][j]=='x')x.push_back(a[j]);
        sort(x.rbegin(),x.rend());
        int v=0;
        while(cnt[i]<mx){
            cnt[i]+=x[v];
            v++;
        }
        cout << v << endl;
    }
    return 0;
}