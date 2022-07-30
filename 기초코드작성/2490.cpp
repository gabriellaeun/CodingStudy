#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[9], result[7];
    int total;

    for(int i=0; i<9; i++) cin >> num[i];
    
    for(int i=0; i<8; i++){
        total = 0;
        for(int j=i+1; j<9; j++){
            total = 0;
            for(int k=0, l=0; k<9; k++){
                if(k!=i && k!=j) result[l++] = num[k];
            }
            for(int l=0; l<7; l++) total += result[l];

            if(total == 100) break;
        }
        if(total == 100) break;
    }

    sort(result, result+7);
    for(int i=0; i<7; i++) cout << result[i] << '\n';


    
}