#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    int n,k;
    cin >> n >> k;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    set<string>str;
    rep(i,k){
        str.insert(s[i]);
    }
    for(string st:str){
        cout << st << endl;
    }
    
    return 0;
}