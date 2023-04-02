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
    map<char,char>m;
    m['O']='0';
    m['D']='0';
    m['I']='1';
    m['Z']='2';
    m['S']='5';
    m['B']='8';
    rep(i,s.size()){
        char c=s[i];
        if(c=='O' || c=='D' || c=='I' || c=='Z' || c=='S' || c=='B')s[i]=m[s[i]];
    }
    cout << s << endl;
    return 0;
}