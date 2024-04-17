#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int h1,h2,h3,w1,w2,w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    int ans=0;
    for(int x1=1;x1<30;x1++){
        for(int x2=1;x2<30;x2++){
            for(int x3=1;x3<30;x3++){
                for(int x4=1;x4<30;x4++){
                    int x5=h1-x1-x2;
                    int x6=h2-x3-x4;
                    int x7=w1-x1-x3;
                    int x8=w2-x2-x4;
                    if(x5<=0)continue;
                    if(x6<=0)continue;
                    if(x7<=0)continue;
                    if(x8<=0)continue;
                    int x9=h3-x7-x8;
                    if(x9<=0)continue;
                    if(x9==w3-x5-x6)ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}