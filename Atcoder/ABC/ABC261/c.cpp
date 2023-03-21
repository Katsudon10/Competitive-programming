#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    map<string,int>cnt;
    rep(i,n){
        string s;
        cin >> s;
        if(cnt[s]==0){
            cout << s << endl;
        }else{
            cout << s << '(' << cnt[s] << ')' << endl;
        }
        cnt[s]++;
    }
    return 0;
}