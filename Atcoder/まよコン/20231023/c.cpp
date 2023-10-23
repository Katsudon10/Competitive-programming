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
    ll n,k;
    cin >> n >> k;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    vector<int>s;
    vector<int>ord(n+1,-1);
    int v=1;
    while(ord[v]==-1){
        ord[v]=s.size();
        s.push_back(v);
        v=a[v-1];
    }
    int c=s.size()-ord[v];
    int l=ord[v];

    if(k<l)cout << s[k] << endl;
    else{
        k-=l;
        k%=c;
        cout << s[l+k] << endl;
    }
    return 0;
}