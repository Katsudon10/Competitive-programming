#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    int ans=0;
    int n=s.size();
    while(n>0){
            if(s.size()>=2 && s.substr(s.size()-2,2)=="00"){
                ans++;
                n-=2;
                s=s.substr(0,s.size()-2);
            }else{
                ans++;
                n--;
                s=s.substr(0,s.size()-1);
            }
        
    }
    cout << ans << endl;
    return 0;
}