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
    int ans=0;
    set<char>st1;
    rep(i,n-1){
        string sb;
        st1.insert(s[i]);
        sb=s.substr(i+1,s.size()-i-1);
        set<char>st2;
        int cnt=0;
        for(char c:sb){
            if(st1.count(c) && !st2.count(c)){
                cnt++;
                st2.insert(c);
            }
        }
        ans=max(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}