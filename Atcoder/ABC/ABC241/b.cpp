#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];

    vector<bool> eated(n);

    for(int i=0;i<m;i++){
        bool ok=false;
        for(int j=0;j<n;j++){
            if(a[j]==b[i] && eated[j]==false){
                eated[j]=true;
                ok=true;
                break;
            }
        }
        if(!ok){
            cout << "No" << endl;
            return 0;
        }

    }
    cout << "Yes" << endl;

}