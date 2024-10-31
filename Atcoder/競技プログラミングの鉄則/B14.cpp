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
vector<ll> f(vector<int> x){
    vector<ll>res;
    for(int bit=0;bit<(1<<x.size());bit++){
        ll sum=0;
        rep(i,x.size()){
            if(bit&(1<<i)){
                sum+=x[i];
            }
        }
        res.push_back(sum);
    }
    return res;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    vector<int>b,c;
    rep(i,n){
        if(i%2==0)b.push_back(a[i]);
        else c.push_back(a[i]);
    }

    vector<ll>s1,s2;
    s1=f(b);
    s2=f(c);
    sort(ALL(s1));
    sort(ALL(s2));

    rep(i,s1.size()){
        int v=lower_bound(ALL(s2),k-s1[i])-s2.begin();
        if(v<s2.size() && s2[v]==k-s1[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}