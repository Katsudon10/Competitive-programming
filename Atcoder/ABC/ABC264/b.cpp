#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int r,c;
    cin >> r >> c;
    r--;c--;
    vector<string>str={
        "###############",
        "#.............#",
        "#.###########.#",
        "#.#.........#.#",
        "#.#.#######.#.#",
        "#.#.#.....#.#.#",
        "#.#.#.###.#.#.#",
        "#.#.#.#.#.#.#.#",
        "#.#.#.###.#.#.#",
        "#.#.#.....#.#.#",
        "#.#.#######.#.#",
        "#.#.........#.#",
        "#.###########.#",
        "#.............#",
        "###############"
    };
    if(str[r][c]=='#'){
        cout << "black" << endl;
    }else{
        cout << "white" << endl;
    }
    return 0;
}