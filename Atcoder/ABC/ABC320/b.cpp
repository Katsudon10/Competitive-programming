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

bool isPalladrome(string s){
    string t=s;
    reverse(ALL(t));
    return t==s;
}

int main(){
    string s;
    cin >> s;
    int n=s.size();
    int ans=0;
    rep(r,n)rep(l,r+1){
        string rs=s.substr(l,r-l+1);
        if(isPalladrome(rs))ans=max(ans,r-l+1);
    }
    cout << ans << endl;
    return 0;
}