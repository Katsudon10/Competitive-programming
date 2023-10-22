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
    string x;
    int n;
    cin >> x >> n;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    
    vector<int>pos(26);
    rep(i,26)pos[x[i]-'a']=i;

    sort(ALL(s),[&](string & st1,string st2){
        int len=min(st1.size(),st2.size());
        rep(i,len){
            if(st1[i]!=st2[i]){
                return pos[st1[i]-'a'] < pos[st2[i]-'a'];
            }
        }
        return st1.size() < st2.size();
    });

    rep(i,n){
        cout << s[i] << endl;
    }
    return 0;
}