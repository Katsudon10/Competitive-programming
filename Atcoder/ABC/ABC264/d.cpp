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
    string s;
    string t="atcoder";
    cin >> s;
    map<char,int>mp;

    int n=s.size();
    rep(i,n)mp[t[i]]=i;
    vector<int>a(n);
    rep(i,n)a[i]=mp[s[i]];

    int ans=0;
    rep(i,n)rep(j,i){
        if(a[j]>a[i])ans++;
    }
    cout << ans << endl;
    return 0;
}