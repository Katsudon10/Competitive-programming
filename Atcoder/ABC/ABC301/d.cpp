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
    ll n;
    cin >> s >> n;

    auto ten= [&](string s){
        ll x=0;
        for(char c:s)x=x*2+(c-'0');
        return x;
    };

    auto f= [&](string s){
        rep(i,s.size()){
            if(s[i]=='?')s[i]='0';
        }
        return ten(s)<=n;
    };

    if(!f(s)){
        cout << -1 << endl;
        return 0;
    }

    rep(i,s.size()){
        if(s[i]=='?'){
            s[i]='1';
            if(!f(s))s[i]='0';
        }
    }

    cout << ten(s) << endl;
    return 0;
}