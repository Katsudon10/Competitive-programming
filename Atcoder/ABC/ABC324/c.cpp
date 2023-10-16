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

string ts;
bool cheack(string s){
    if(s==ts)return true;
    else if(abs(ts.size()-s.size())>1){
        return false;
    }else{
        
    }
    return false;
}

int main(){
    int n;
    string ts;
    cin >> n >> ts;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    rep(i,n){
        if(cheack(s[i])){
            ans.push_back(i+1);
        }
    }
    cout << ans.size() << endl;
    for(int v:ans)cout << v << ' ';
    return 0;
}