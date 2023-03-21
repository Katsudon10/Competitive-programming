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
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    vector<int>A(n),B(n);
    rep(i,n)cin >> A[i];
    rep(i,n)cin >> B[i];

    vector<bool>seen(n,false);
    vector<P>math(n),eng(n),me(n);
    rep(i,n){
        math[i]=P(-1*A[i],i);
        eng[i]=P(-1*B[i],i);
        me[i]=P(-1*(A[i]+B[i]),i);
    }
    sort(math.begin(),math.end());
    sort(eng.begin(),eng.end());
    sort(me.begin(),me.end());
    rep(i,x){
        seen[math[i].second]=true;
    }
    int cnt=0;
    rep(i,n){
        if(cnt==y)break;
        if(!seen[eng[i].second]){
            seen[eng[i].second]=true;
            cnt++;
        }
    }
    cnt=0;
    rep(i,n){
        if(cnt==z)break;
        if(!seen[me[i].second]){
            seen[me[i].second]=true;
            cnt++;
        }
    }
    rep(i,n){
        if(seen[i])cout << i+1 << endl;
    }
    return 0;
}