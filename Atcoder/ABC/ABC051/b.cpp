#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    int k,s;
    cin >> k >> s;
    int num=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int z=s-i-j;
            if(z>=0 && z<=k) num++;
        }
    }
    cout << num << endl;
    return 0;
}