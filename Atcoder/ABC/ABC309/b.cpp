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
    vector<vector<char>>ans(n,vector<char>(n));
    rep(i,n)cin >> s[i];
    rep(i,n){
        rep(j,n){
            if(i==0){
                if(j==0)ans[i][j]=s[i+1][j];
                else ans[i][j]=s[i][j-1];
            }else if(i==n-1){
                if(j==n-1)ans[i][j]=s[i-1][j];
                else ans[i][j]=s[i][j+1];
            }else if(j==n-1 && i!=0){
                ans[i][j]=s[i-1][j];
            }else if(j==0 && i!=n-1){
                ans[i][j]=s[i+1][j];
            }else{
                ans[i][j]=s[i][j];
            }
        }
    }
    rep(i,n){
        rep(j,n){
            cout << ans[i][j];
        }
        cout << endl;
    }   

    
    return 0;
}