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
    int h,w;
    cin >> h >> w;
    vector<string>S(h);
    rep(i,h)cin >> S[i];
    string ans1="snuke",ans2="ekuns";
    rep(i,h)rep(j,w){
        int cnt=0;
        rep(k,5){
            if(i+k<h && ans1[k]==S[i+k][j])cnt++;
        }
        if(cnt==5){
            rep(k,5){
                cout << i+k+1 << ' ' << j+1 << endl;
            }
            return 0;
        }
        cnt=0;
        rep(k,5){
            if(j+k<w && ans1[k]==S[i][j+k])cnt++;
        }
        if(cnt==5){
            rep(k,5){
                cout << i+1 << ' ' << j+k+1 << endl;
            }
            return 0;
        }
        cnt=0;
        rep(k,5){
            if(i+k<h && j+k<w && ans1[k]==S[i+k][j+k])cnt++;
        }
        if(cnt==5){
            rep(k,5){
                cout << i+k+1 << ' ' << j+k+1 << endl;
            }
            return 0;
        }
        cnt=0;
        rep(k,5){
            if(i+k<h && j-k>=0 && ans1[k]==S[i+k][j-k])cnt++;
        }
        if(cnt==5){
            rep(k,5){
                cout << i+k+1 << ' ' << j-k+1 << endl;
            }
            return 0;
        }
    }
    vector<P>p(5);
    rep(i,h)rep(j,w){
        int cnt=0;
        rep(k,5){
            if(i+k<h && ans2[k]==S[i+k][j])cnt++;
        }
        if(cnt==5){
            rep(k,5){
                p[k]=make_pair(i+k+1,j+1);
            }
            reverse(ALL(p));
            rep(k,5){
                cout << p[k].first << ' ' << p[k].second << endl;
            }
            return 0;
        }
        cnt=0;
        rep(k,5){
            if(j+k<w && ans2[k]==S[i][j+k])cnt++;
        }
        if(cnt==5){
            rep(k,5){
                p[k]=make_pair(i+1,j+k+1);
            }
            reverse(ALL(p));
            rep(k,5){
                cout << p[k].first << ' ' << p[k].second << endl;
            }
            return 0;
        }
        cnt=0;
        rep(k,5){
            if(i+k<h && j+k<w && ans2[k]==S[i+k][j+k])cnt++;
        }
        if(cnt==5){
            rep(k,5){
                p[k]=make_pair(i+k+1,j+k+1);
            }
            reverse(ALL(p));
            rep(k,5){
                cout << p[k].first << ' ' << p[k].second << endl;
            }
            return 0;
        }
        cnt=0;
        rep(k,5){
            if(i+k<h && j-k>=0 && ans2[k]==S[i+k][j-k])cnt++;
        }
        if(cnt==5){
            rep(k,5){
                p[k]=make_pair(i+k+1,j-k+1);
            }
            reverse(ALL(p));
            rep(k,5){
                cout << p[k].first << ' ' << p[k].second << endl;
            }
            return 0;
        }
    }
    return 0;
}