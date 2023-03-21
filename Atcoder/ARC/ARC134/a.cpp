#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    long long int l,w;
    cin >> n >> l >> w;
    vector<bool>num(l+1);
    rep(i,n){
        int a;
        cin >> a;
        rep(a,w) num[a]=true;
    }
    int itr=0;
    int ans=0;
    int flag=0;
    rep(i,l){
        if(num[i]!=true){
            flag++;
        }else{
            ans+=ceil(flag/w);
            flag=0;
        }
    }
    cout << ans << endl;
    return 0;
}