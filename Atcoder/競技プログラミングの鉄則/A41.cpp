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
    bool ans=false;
    rep(i,n-2){
        if(s[i]==s[i+1] && s[i]==s[i+2])ans=true;
    }
    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}