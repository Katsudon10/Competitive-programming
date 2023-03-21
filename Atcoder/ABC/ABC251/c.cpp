#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    cin >> n;
    string anss;
    int maxt;
    cin >> anss >> maxt;
    map<string,bool>smap;
    smap[anss]=true;
    int pos=1;
    for(int i=1;i<n;i++){
        string str;
        int tmpt;
        cin >> str >> tmpt;
        if(maxt<tmpt && !smap[str]){
            maxt=tmpt;
            pos=i+1;
        }
        smap[str]=true;
    }
    cout << pos << endl;
    return 0;
}