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
    string s,t;
    cin >> s >> t;
    map<char,int>mp;
    vector<char>st={'A','B','C','D','E'};
    rep(i,5)mp[st[i]]=i+1;
    int sl=abs(mp[s[0]]-mp[s[1]]);
    int tl=abs(mp[t[0]]-mp[t[1]]);
    if(min(sl,5-sl)==min(tl,5-tl))cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}