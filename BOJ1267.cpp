#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, time[20];
    int y=0, m=0;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> time[i];
        y += (time[i]/30 + 1)*10;
        m += (time[i]/60 + 1)*15;
    }
    
    if(y>m) cout << "M " << m;
    else if(y<m) cout << "Y " << y;
    else cout << "Y M " << y;
}