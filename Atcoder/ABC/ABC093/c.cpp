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
    int a,b,c;
    cin >> a >> b >> c;
    int odd=0,even=0;
    if(a%2==0)even++;
    else odd++;
    if(b%2==0)even++;
    else odd++;
    if(c%2==0)even++;
    else odd++;
    
    ll ans=0;
    if(odd==2){
        ans++;
        if(a%2==1)a++;
        if(b%2==1)b++;
        if(c%2==1)c++;
    }else if(even==2){
        ans++;
        if(a%2==0)a++;
        if(b%2==0)b++;
        if(c%2==0)c++;
    }

    int m=max(a,max(b,c));
    ans+=(m-a)/2;
    ans+=(m-b)/2;
    ans+=(m-c)/2;
    cout << ans << endl;
    return 0;
}