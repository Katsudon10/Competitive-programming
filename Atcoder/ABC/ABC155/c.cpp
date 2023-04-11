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
    map<string,int>mp;
    rep(i,n){
        string s;
        cin >> s;
        mp[s]++;
    }
    int ma=-1;
    for(auto p:mp)ma=max(ma,p.second);
    for(auto p:mp){
        if(p.second==ma){
            cout << p.first << endl;
        }
    }
    return 0;
}