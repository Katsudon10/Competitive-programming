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
    int n;
    cin >> n;
    vector<int>cnt(n);
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        a--;b--;
        cnt[a]++;
        cnt[b]++;
    }
    rep(i,n){
        if(cnt[i]==n-1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}