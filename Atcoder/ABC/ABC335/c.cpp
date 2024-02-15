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
    int n,q;
    cin >> n >> q;
    int x=0,y=0;
    deque<P>deq;
    rep(i,n)deq.push_back(P(i+1,0));
    rep(i,q){
        int que;
        cin >> que;
        if(que==1){
            char c;
            cin >> c;
            deq.pop_back();
            P p=deq.front();
            if(c=='R')p.first++;
            else if(c=='L')p.first--;
            else if(c=='U')p.second++;
            else if(c=='D')p.second--;
            deq.push_front(p);
        }else{
            int p;
            cin >> p;
            cout << deq[p-1].first << ' ' << deq[p-1].second << endl;
        }
    }
    return 0;
}