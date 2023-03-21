#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    ll n;
    cin >> n;
    string ans;
    while(n>0){
        if(n%2==0){
            ans+='B';
            n/=2;
        }else{
            ans+='A';
            n--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}