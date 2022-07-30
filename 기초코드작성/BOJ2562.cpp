#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[10], max=0, idx;
    for(int i=1; i<=9; i++){
        cin >> num[i];
        if(max < num[i]) {
            max = num[i]; 
            idx = i;
        }
    }

    cout << max << "\n";
    cout << idx;
}