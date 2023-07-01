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
    vector<int>s(8);
    rep(i,8)cin >> s[i];
    vector<int>sn=s;
    sort(ALL(sn));
    if(sn!=s){
        cout << "No" << endl;
        return 0;
    }

    rep(i,8){
        if(s[i]<100 || s[i]>675){
            cout << "No" << endl;
            return 0;
        }
        if(s[i]%25!=0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}