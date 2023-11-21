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
    vector<char>c(4);
    rep(i,4)cin >> c[i];
    vector<int>a(4);
    rep(i,4)a[i]=c[i]-'0';

    char op[]={'+','-'};
    rep(i,2){
        rep(j,2){
            rep(k,2){
                rep(l,2){
                    ll cnt=0;
                    cnt+=a[0];

                    if(j==0)cnt+=a[1];
                    else cnt-=a[1];

                    if(k==0)cnt+=a[2];
                    else cnt-=a[2];

                    if(l==0)cnt+=a[3];
                    else cnt-=a[3];

                    if(cnt==7){
                        cout << a[0] << op[j] << a[1] << op[k] << a[2] << op[l] << a[3]  << "=7" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}