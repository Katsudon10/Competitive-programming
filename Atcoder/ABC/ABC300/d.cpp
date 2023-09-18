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
    ll n;
    cin >> n;
    vector<bool>isprime(300004,false);
    vector<ll>p;
    for(int i=2;i<=300000;i++){
        if(isprime[i])continue;
        p.push_back(i);
        for(int j=i;j<=300000;j+=i){
            isprime[j]=true;
        }
    }
    int ans=0;
    int sp=p.size();
    for(int i=0;i<sp;i++){
        for(int j=i+1;j<sp;j++){
            for(int k=j+1;k<sp;k++){
                ll v=p[i]*p[i]*p[j];
                if(v>n)break;
                v*=p[k];
                if(v>n)break;
                v*=p[k];
                if(v>n)break;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}