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
    int n;
    cin >> n;
    vector<ll>ans;
    vector<ll>s;
    for(ll i=1;i<1e12;i=i*10+1)s.push_back(i);
    set<ll>st;
    for(ll a:s){
        for(ll b:s){
            for(ll c:s){
                st.insert(a+b+c);
            }
        }
    }
    for(ll x:st)ans.push_back(x);
    cout << ans[n-1] << endl;
    return 0;
}