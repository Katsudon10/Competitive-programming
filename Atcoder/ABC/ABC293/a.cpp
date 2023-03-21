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
    for(int i=0;i<s.size();i+=2){
        char c=s[i];
        s[i]=s[i+1];
        s[i+1]=c;
    }
    cout << s << endl;
    return 0;
}