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
    int n;
    string s;
    cin >> n >> s;
    deque<int>deq={n};
    for(int i=n-1;i>=0;i--){
        if(s[i]=='L')deq.push_back(i);
        else deq.push_front(i);
    }
    rep(i,n+1)cout << deq[i] << ' ';
    cout << endl;
    return 0;
}