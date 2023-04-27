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
    string s;
    cin >> s;
    int ans=0;
    rep(i,10000){
        int num=i;
        vector<bool>seen(10,false);
        rep(j,4){
            seen[num%10]=true;
            num/=10;
        }
        bool flag=true;
        rep(j,10){
            if(s[j]=='o' && !seen[j])flag=false;
            if(s[j]=='x' && seen[j])flag=false;
        }
        if(flag)ans++;
    }
    cout << ans << endl;
    return 0;
}