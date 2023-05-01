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

int main(){
    vector<bool>prime(201,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=200;i++){
        if(!prime[i])continue;
        for(int j=i*2;j<=200;j+=i){
            prime[j]=false;
        }
    }
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i=a;i<=b;i++){
        bool flag=true;
        for(int j=c;j<=d;j++){
            if(prime[i+j])flag=false;
        }
        if(flag){
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
}