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
    string s,t;
    cin >> s >> t;
    bool ans=true;
    rep(i,n){
        if(s[i]==t[i])continue;
        if(s[i]=='1' && t[i]=='l')continue;
        if(s[i]=='l' && t[i]=='1')continue;
        if(s[i]=='0' && t[i]=='o')continue;
        if(s[i]=='o' && t[i]=='0')continue;
        ans=false;
    }
    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
