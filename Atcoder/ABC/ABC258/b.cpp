#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int maxnum=0;
    int maxi,maxj;
    vector<vector<int>>num(n,vector<int>(n));
    rep(i,n)rep(j,n){
        int a;
        cin >> a;
        num[i][j]=a;
        if(a>maxnum){
            swap(maxnum,a);
            maxi=i;
            maxj=j;
        }
    }
    vector<ll>ansnum;
    ansnum[0]=num[maxi][maxj]


    return 0;
}