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
ll gcd(int a,int b){
    if(a%b==0){
        return b;
    }else{
        return gcd(b,a%b);
    }
}

int main(){
    int n;
    cin >> n;
    ll ans=1;
    ll rec=1;
    for(int i=3;i<=n;i++){
        ans=gcd(ans,i);
        rec*=i;
    }
    cout << rec/ans+1 << endl;
    return 0;
}