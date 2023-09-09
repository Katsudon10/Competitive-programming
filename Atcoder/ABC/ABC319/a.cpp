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
    map<string,int>mp;
    mp["tourist"]= 3858;
    mp["ksun48"]= 3679;
    mp["Benq"]= 3658;
    mp["Um_nik"]= 3648;
    mp["apiad"]= 3638;
    mp["Stonefeang"]= 3630;
    mp["ecnerwala"]= 3613;
    mp["mnbvmar"]= 3555;
    mp["newbiedmy"]= 3516;
    mp["semiexp"]= 3481;

    string s;
    cin >> s;
    cout << mp[s] << endl;
    return 0;
}