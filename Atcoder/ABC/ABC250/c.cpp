#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,q;
    cin >> n >> q;

    vector<int>num(n);
    vector<int>pos(n);

    rep(i,n) num[i]=i;
    rep(i,n) pos[num[i]]=i;

    rep(i,q){
        int x;
        cin >> x;
        x--;
        int k=pos[x];
        int j=k+1;
        if(j==n) j=k-1;
        swap(num[k],num[j]);
        pos[num[k]]=k;
        pos[num[j]]=j;
    }
    rep(i,n) cout << num[i]+1 <<' ';
    cout << endl;
    return 0;
}