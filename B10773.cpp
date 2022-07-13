#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
int K, n;
int sum=0;

int main(){
    cin >> K;
    for(int i=0; i<K; i++){
        cin >> n;
        if(n == 0){
            s.pop();
        } 
        else{
          s.push(n);
        }
    }

    while(!s.empty()){
        sum += s.top();
        s.pop();
    }

    cout << sum;
}