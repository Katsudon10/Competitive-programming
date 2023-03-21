#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    rep(i,n){
        if(i%2==0){
            rep(l,a){
                rep(j,n){
                    if(j%2==0){
                        rep(k,b) cout << '.';
                    }else{
                        rep(k,b) cout << '#';
                    }
                }
                cout << endl;
            }
            
        }else{
            rep(l,a){
                rep(j,n){
                    if(j%2==0){
                        rep(k,b) cout << '#';
                    }else{
                        rep(k,b) cout << '.';
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}