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
    int q;
    cin >> q;
    
    string s1,s2;
    s1=s2="abcdefghijklmnopqrstuvwxyz";
    rep(i,q){
        char c,d;
        cin >> c >> d;
        rep(j,s2.size()){
            if(s2[j]==c)s2[j]=d;
        }
    }

    for(char c:s){
        rep(i,s1.size()){
            if(c==s1[i])cout << s2[i];
        }
    }
    cout << endl;
    return 0;
}