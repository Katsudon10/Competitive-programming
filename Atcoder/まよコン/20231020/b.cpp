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
    string a,b;
    cin >> a >> b;
    if(a.size()>b.size())cout << "GREATER" << endl;
    else if(a.size()<b.size())cout << "LESS" << endl;
    else if(a>b)cout << "GREATER" << endl;
    else if(a==b)cout << "EQUAL" << endl;
    else cout << "LESS" << endl;
    return 0;
}