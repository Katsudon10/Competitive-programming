#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    string num;
    cin >> num;
    long long int ans=0;
    for(int bit=0;bit<(1<<num.size()-1);++bit){
        long long int tmp=0;
        for(int i=0;i<num.size()-1;i++){
            tmp*=10;
            tmp+=num[i]-'0';
            if(bit & (1<<i)){
                ans+=tmp;
                tmp=0;
            }
        }
        tmp*=10;
        tmp+=num.back()-'0';
        ans+=tmp;
    }

    cout << ans << endl;
    return 0;
}