#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    long long int ans=0;
    cin >> n;
    queue<int>que;
    rep(i,n){
        int num;
        cin >> num;
        if(num==1){
            int x,c;
            cin >> x >> c;
            rep(i,c) que.push(x);
        }else{
            int c;
            cin >> c;
            rep(i,c){
                int ans=0;
                ans+=que.front();
                que.pop();
            }
            cout << ans << endl;
        }
    }
    
    return 0;
}