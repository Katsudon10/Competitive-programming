#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
struct Edge{
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
};
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int w,b;
    cin >> w >> b;
    string s;
    rep(i,50)s+="wbwbwwbwbwbw";
    int ws=0,bs=0;
    rep(i,w+b){
        if(s[i]=='w')ws++;
        else bs++;
    }
    bool flag=false;
    rep(i,s.size()-w-b){
        if(ws==w && bs==b)flag=true;
        else{
            if(s[i]=='w')ws--;
            else bs--;
            if(s[i+w+b]=='w')ws++;
            else bs++;
        }
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}