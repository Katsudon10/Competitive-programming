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
    map<char,char>mp1,mp2;
    for(char c:s)mp1[c]=c;
    rep(i,q){
        char c,d;
        cin >> c >> d;
        if(mp1.count(c)){
            if(mp2.count(c)){
                mp1[mp2[c]]=d;
                mp2[d]=mp2[c];
                mp1[c]=d;
            }else{
                mp1[c]=d;
                mp2[d]=c;
            }
        }
    }
    for(char c:s){
        cout << mp1[c];
    }
    cout << endl;
    return 0;
}