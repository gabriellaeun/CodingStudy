#include <bits/stdc++.h>
using namespace std;

int main(){
    int card[21];
    int a, b;

    for(int i=1; i<=20; i++){
        card[i] = i;
    }

    for(int i=1; i<=10; i++){
        cin >> a >> b;
        for(int i=0; i<(b-a+1)/2; i++){
            swap(card[a+i], card[b-i]);
        }
    }

    for(int i=1; i<=20; i++) cout << card[i] << " ";
}