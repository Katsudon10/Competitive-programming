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
    string s,t;
    cin >> s >> t;
    ll cnt=0;
    rep(i,s.size()-1){
        if(s[i]!=t[i]){
            if(s[i]==t[i+1] && t[i]==s[i+1]){
                cnt++;
                i+=1;
            }else{
                cout << "No" << endl;
                return 0;
            }
        }
    }
    if(cnt<2)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}