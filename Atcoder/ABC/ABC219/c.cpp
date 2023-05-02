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
    string x;
    int n;
    cin >> x >> n;
    vector<string>s(n);
    rep(i,n)cin >> s[i];

    vector<int>pos(26);
    rep(i,26)pos[x[i]-'a']=i;

    sort(ALL(s),[&](const string& s,const string& t){
        int len=min(s.size(),t.size());
        rep(i,len){
            if(s[i]!=t[i]){
                return pos[s[i]-'a']<pos[t[i]-'a'];
            }
        }
        return s.size()<t.size();
    });
    rep(i,n){
        cout << s[i] << endl;
    }
    return 0;
}