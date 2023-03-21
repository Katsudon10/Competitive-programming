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
    int n,m;
    cin >> n >> m;
    vector<string>S(n);
    set<string>T;
    string s;
    rep(i,n)cin >> S[i];
    rep(i,m){
        cin >> s;
        T.insert(s);
    }
    for(string s:S){
        if(T.count(s)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}