#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>>masu(h,vector<int>(w));
    rep(i,h)rep(j,w){
        char s;
        cin >> s;
        if(s!='.'){
            masu[i][j]=s-'0';
        }else{
            masu[i][j]=0;
        }
    }
    rep(i,h)rep(j,w){
        if(masu[i][j]==0){
            vector<bool>num_list(5,true);
            if(i-1>=0) num_list[masu[i-1][j]-1]=false;
            if(i+1<h && masu[i+1][j]!=0) num_list[masu[i+1][j]-1]=false;
            if(j-1>=0) num_list[masu[i][j-1]-1]=false;
            if(j+1<w && masu[i][j+1]!=0) num_list[masu[i][j+1]-1]=false;
            rep(k,5){
                if(num_list[k]==true){
                    masu[i][j]=k+1;
                    break;
                } 
            }
        }
        
    }

    rep(i,h){
        rep(j,w){
            cout << masu[i][j];
        }
        cout << endl;
    }
    return 0;
}