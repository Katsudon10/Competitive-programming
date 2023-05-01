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
    int n;
    cin >> n;
    ll cnt=0;
    for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                for(int l=0;l<=9;l++){
                    for(int m=0;m<=9;m++){
                        for(int o=0;o<=9;o++){
                            cnt++;
                            if(cnt==n){
                                cout << i << i << j << k << l << l << m << o << m <<endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}