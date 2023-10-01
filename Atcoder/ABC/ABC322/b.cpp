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
    int n,m;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;
    string sr=s,tr=t;
    reverse(ALL(sr));
    reverse(ALL(tr));
    if(s==t.substr(0,n) && sr==tr.substr(0,n)){
        cout << 0 << endl;
    }else if(s==t.substr(0,n)){
        cout << 1 << endl;
    }else if(sr==tr.substr(0,n)){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }
    return 0;
}