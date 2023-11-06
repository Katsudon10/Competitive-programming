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

int ham(string &s,string &t){
    if(s.size()!=t.size())return 999;
    int cnt=0;
    rep(i,s.size())if(s[i]!=t[i])cnt++;
    return cnt;
}

bool f(string &s,string &t){
    if(s.size()!=t.size()+1)return false;
    int si=0;
    rep(ti,t.size()){
        while(si<s.size() && s[si]!=t[ti])si++;
        if(si==s.size())return false;
        si++;
    }
    return true;
}

int main(){
    int n;
    string t;
    cin >> n >> t;
    vector<string>s(n);
    rep(i,n)cin >> s[i];

    vector<int>ans;
    rep(i,n){
        bool ok=false;
        if(s[i].size()+1>=t.size()){
            if(f(s[i],t))ok=true;
            if(f(t,s[i]))ok=true;
            if(ham(s[i],t)<=1)ok=true;
        }
        if(ok)ans.push_back(i+1);
    }
    cout << ans.size() << endl;
    for(int v:ans)cout << v << ' ';
    cout << endl;
    return 0;
}