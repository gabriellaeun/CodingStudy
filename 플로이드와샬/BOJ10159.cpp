#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int d[101][101];
int n, m, a, b, sum;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            d[i][j] = INF;
        }
    }

    for(int i=0; i<m; i++){
        cin >> a >> b;
        d[a][b] = 1;
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    for(int i=1; i<=n; i++){
        sum = 0;
        for(int j=1; j<=n; j++){
            if(d[i][j] == INF && d[j][i] == INF) sum++;
        }
        cout << sum-1 << '\n';
    }
}