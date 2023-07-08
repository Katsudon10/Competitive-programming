#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int a,b;
    cin >> a >> b;
    bool flag=false;
    if(a==1){
        if(b==2)flag=true;
    }else if(a==2){
        if(b==1 || b==3)flag=true;
    }else if(a==3){
        if(b==2)flag=true;
    }else if(a==4){
        if(b==5)flag=true;
    }else if(a==5){
        if(b==4 || b==6)flag=true;
    }else if(a==6){
        if(b==5)flag=true;
    }else if(a==7){
        if(b==8)flag=true;
    }else if(a==8){
        if(b==7 || b==9)flag=true;
    }else if(a==9){
        if(b==6 || b==8)flag=true;
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No"<< endl;
    }
    
    return 0;
}