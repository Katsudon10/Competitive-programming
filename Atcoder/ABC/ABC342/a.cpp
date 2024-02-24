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
    string s;
    cin >> s;
    char c=s[0];
    if(c!=s[1] && c!=s[2]){
        cout << 1 << endl;
        return 0;
    }
    for(int i=1;i<s.size();i++){
        if(c!=s[i]){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}