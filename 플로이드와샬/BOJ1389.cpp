#include <bits/stdc++.h>
using namespace std;

const int INF = 4000000;
int d[401][401];
int result = INF;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int v, e, a, b, c;

    cin >> v >> e;

    for(int i=1; i<=v; i++){
        for(int j=1; j<=v; j++){
            d[i][j] = INF;
        }
    }

    for(int i=1; i<=e; i++) {
        cin >> a >> b >> c;
        d[a][b] = c;
    }

    for(int k=1; k<=v; k++){
        for(int i=1; i<=v; i++){
            for(int j=1; j<=v; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                if(i==j) result = min(result, d[i][j]);
            }
        }
    }

    if(result == INF) cout << -1;
    else cout << result;
}