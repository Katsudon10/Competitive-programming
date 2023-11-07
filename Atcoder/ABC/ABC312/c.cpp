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
    vector<int>a(n),b(m);
    rep(i,n)cin >> a[i];
    rep(i,m)cin >> b[i];

    vector<P>ev;
    rep(i,n)ev.push_back(P(a[i],0));
    rep(i,m)ev.push_back(P(b[i]+1,1));

    sort(ALL(ev));

    int na=0,nb=m;
    for(auto v:ev){
        if(v.second==0)na++; else nb--;
        if(na>=nb){
            cout << v.first << endl;
            return 0;
        }
    }
    return 0;
}