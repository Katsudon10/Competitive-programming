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
    int n,a,b;
    cin >> n >> a >> b;
    int ans=0;
    rep(i,n){
        string s;
        int x;
        cin >> s >> x;
        if(s=="East"){
            if(x<a)ans-=a;
            else if(x>=a && x<=b)ans-=x;
            else ans-=b;
        }else{
            if(x<a)ans+=a;
            else if(x>=a && x<=b)ans+=x;
            else ans+=b;
        }
    }
    if(ans==0){
        cout << ans << endl;
        return 0;
    }else if(ans>0){
        cout << "West ";
        cout << ans << endl;
    }else{
        cout << "East ";
        cout << -1*ans << endl;
    } 
    return 0;
}