#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
//using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

vector<int>X(151),Y(151),P(151);
vector<bool>visited(151,false);
int n;
//fixed << setprecision(10)
double GetDistance(int a,int b){
    return sqrt((X[a]-X[b])*(X[a]-X[b])+(Y[a]-Y[b])*(Y[a]-Y[b]));
}

void PlayGreedy(){
    int current=0;
    visited[current]=true;
    P[0]=current+1;

    for(int i=1;i<n;i++){
        double mind=10000.0;
        int mini=-1;
        rep(j,n){
            if(visited[j])continue;
            double newd=GetDistance(current,j);
            if(newd<mind){
                mind=newd;
                mini=j;
            }
        }
        visited[mini]=true;
        P[i]=mini+1;
        current=mini;
    }
    P[n]=1;
}

int main(){
    cin >> n;
    rep(i,n)cin >> X[i] >> Y[i];
    PlayGreedy();
    rep(i,n+1){
        cout << P[i] << endl;
    }
    return 0;
}