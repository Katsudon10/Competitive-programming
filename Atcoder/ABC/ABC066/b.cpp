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
    int n=s.size();
    rep(i,n){
        s=s.substr(0,s.size()-1);
        if(s.size()%2!=0)continue;
        string str1=s.substr(0,s.size()/2);
        string str2=s.substr(s.size()/2,s.size()/2);
        if(str1==str2){
            cout << s.size() << endl;
            return 0;
        }
    }
    return 0;
}