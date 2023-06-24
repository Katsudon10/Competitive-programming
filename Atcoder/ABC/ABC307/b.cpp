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
    cin >> n;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    rep(i,n){
        bool flag=false;
        rep(j,i){
            string st=s[i]+s[j];
            string rst=st;
            reverse(ALL(rst));
            if(rst==st)flag=true;

            st=s[j]+s[i];
            rst=st;
            reverse(ALL(rst));
            if(rst==st)flag=true;
        }
        if(flag){
            cout << "Yes" << endl;
            return 0;

        }
    }
    cout << "No" << endl;
    return 0;
}