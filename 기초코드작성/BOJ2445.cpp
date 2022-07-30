#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++) cout << "*";
        for(int k=0; k<2*(n-i-1); k++) cout << " ";
        for(int l=0; l<i+1; l++) cout << "*";
        cout << "\n";
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++) cout << "*";
        for(int k=0; k<2*i; k++) cout << " ";
        for(int l=0; l<n-i; l++) cout << "*";
        cout << "\n";
    }
}