#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int q;
    cin >> q;
    multiset<int>s;
    rep(i,q){
        int query;
        cin >> query;
        if(query==1){
            int x;
            cin >> x;
            s.insert(x);
        }else if(query==2){
            int x,c;
            cin >> x >> c;
            rep(i,c){
                if(s.find(x)!=s.end())s.erase(s.find(x));
                else break;
            }
        }else{
            cout << *s.rbegin() - *s.begin() << endl;
        }
    }
    return 0;
}