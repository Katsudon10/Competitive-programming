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
    cin >> s;
    string ans="";
    rep(i,s.size()){
        if(s[i]=='0'){
            ans+='0';
        }else if(s[i]=='1'){
            ans+='1';
        }else if(s[i]=='B' && ans.size()>0){
            ans.erase(ans.size()-1,1);
        }
    }
    cout << ans << endl;
    return 0;
}