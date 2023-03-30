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
    set<string>s;
    vector<string>str(n);
    rep(i,n)cin >> str[i];
    rep(i,n){
        if(str[i][0]!='!' && s.count('!'+str[i])){
            cout << str[i] << endl;
            return 0;
        }
        if(str[i][0]=='!' && s.count(str[i].substr(1,str[i].size()-1))){
            cout << str[i].substr(1,str[i].size()-1) << endl;
            return 0;
        }
        s.insert(str[i]);
    }
    cout << "satisfiable" << endl;
    return 0;
}