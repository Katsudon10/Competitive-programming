#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int h,w;
    cin >> h >> w;
    int dish=0,disw=0;
    for(int i=0;i<h;i++){
        string s;
        cin >> s;
        for(int j=0;j<w;j++){
            if(s.at(j)=='o'){
                dish=abs(dish-i);
                disw=abs(disw-j);
            }
        }
    }
    cout << dish+disw << endl;
    return 0;
}