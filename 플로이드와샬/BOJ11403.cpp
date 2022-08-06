#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
int d[101][101];
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> d[i][j];
            if(d[i][j] == 0)
                d[i][j] = INF;
        }
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(d[i][j] == INF)
                cout << 0 << ' ';
            else
                cout << 1 << ' ';
        }
        cout << '\n';
    }


}