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
    string s;
    cin >> n >> s;
    set<P>S;
    S.insert(P(0,0));
    
    P t(0,0);
    rep(i,n){
        if(s[i]=='R'){
            t.first++;
        }
        if(s[i]=='L'){
            t.first--;
        }
        if(s[i]=='U'){
            t.second++;
        }
        if(s[i]=='D'){
            t.second--;
        }
        if(S.count(t)){
            cout << "Yes" << endl;
            return 0;
        }else{
            S.insert(t);
        }
    }
    cout << "No" << endl;
    return 0;
}