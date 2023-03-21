#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    rep(i,n){
        if(s[i]=='1'){
            if(i%2==0){
                cout << "Takahashi" << endl;
                return 0;
            }else{
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }
    return 0;
}