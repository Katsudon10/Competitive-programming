#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n,k,q;
    cin >> n >> k >> q;
    vector<int>flag(n);
    rep(i,k){
        int a;
        cin >> a;
        flag[a-1]=true;
    }
    
    rep(i,q){
        int l;
        cin >> l;
        int num=0;
        rep(j,n){
            if(flag[j]) num++;
            if(num==l){
                if(j==n-1){
                    continue;
                }else if(!flag[j+1]){
                flag[j+1]=true;
                flag[j]=false;
                }  
            }
        }
    }
    rep(i,n){
        if(flag[i]) cout << i+1 << ' ';
    }
    cout << endl;
    return 0;
}
