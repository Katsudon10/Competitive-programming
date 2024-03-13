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
    vector<int>x(n),y(n);
    rep(i,n)cin >> x[i] >> y[i];
    string s;
    cin >> s;
    map<int,int>L,R;
    rep(i,n){
        if(s[i]=='L'){
            if(!L.count(y[i]))L[y[i]]=x[i];
            else L[y[i]]=max(L[y[i]],x[i]);
        }else{
            if(!R.count(y[i]))R[y[i]]=x[i];
            else R[y[i]]=min(R[y[i]],x[i]);
        }
    }
    bool ans=false;
    for(auto p:R){
        auto key=p.first;
        if(L.count(key) && R[key]<L[key])ans=true;
    }
    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}