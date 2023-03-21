#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string str;
    cin >> str;
    int ans=0;
    rep(i,str.size()){
        if(str.at(i)=='a'){
            ans=i+1;
        }
    }
    if(ans!=0){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
    
    return 0;
}