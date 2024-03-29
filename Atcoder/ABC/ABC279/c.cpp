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
    int h,w;
    cin >> h >> w;
    vector<string>s(h),t(h);
    rep(i,h) cin >> s[i];
    rep(i,h) cin >> t[i];
    
    vector<string>st(w),tt(w);
    rep(i,h)rep(j,w){
        st[j].push_back(s[i][j]);
        tt[j].push_back(t[i][j]);
    }
    sort(ALL(st));
    sort(ALL(tt));
    if(st==tt){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}