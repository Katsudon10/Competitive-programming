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

vector<int> count(string s){
    vector<int>cnt(27);
    for(char c:s){
        if(c=='@')cnt[26]++;
        else cnt[c-'a']++;
    }
    return cnt;
}

int main(){
    string s,t;
    cin >> s >> t;
    vector<int>cs=count(s);
    vector<int>ct=count(t);
    string A="atcoder";

    bool flag=true;
    vector<bool>inA(26);
    for(char c:A)inA[c-'a']=true;

    rep(i,26) if(!inA[i]){
        if(cs[i]!=ct[i])flag=false;
    }

    rep(i,26) if(inA[i]){
        if(cs[i]<ct[i])cs[26]-=ct[i]-cs[i];
        else ct[26]-=cs[i]-ct[i];
    }

    if(cs[26]<0)flag=false;
    if(ct[26]<0)flag=false;
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}