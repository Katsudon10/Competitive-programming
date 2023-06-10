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
    char p,q;
    cin >> p >> q;
    vector<int>D={0,3,4,8,9,14,23};
    int pn=p-'A',qn=q-'A';
    if(pn>qn)swap(pn,qn);
    cout << D[qn]-D[pn] << endl;
    return 0;
}