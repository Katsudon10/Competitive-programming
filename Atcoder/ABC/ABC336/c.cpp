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
    n--;
    vector<int>ans;
    while(n){
        ans.push_back(n%5);
        n/=5;
    }
    if(ans.empty())ans.push_back(0);
    reverse(ALL(ans));
    for(int a:ans)cout << a*2;
    cout << endl;
    return 0;
}