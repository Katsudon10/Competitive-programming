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

int main(){
    string s;
    cin >> s;
    stack<int>S;
    rep(i,s.size()){
        if(s[i]=='('){
            S.push(i+1);
        }else{
            cout << S.top() << ' ' << i+1 << endl;
            S.pop();
        }
    }
    return 0;
}