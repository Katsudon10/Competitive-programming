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
    int n;
    cin >> n;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    map<string,int>mp;
    rep(i,n)mp[s[i]]++;
    
    int m=0;
    string ans;
    for(auto v:mp){
        if(v.second>m){
            ans=v.first;
            m=v.second;
        }
    }
    cout << ans << endl;
    return 0;
}