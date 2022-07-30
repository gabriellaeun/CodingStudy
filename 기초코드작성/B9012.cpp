#include <iostream>
#include <stack>
using namespace std;

int T;
string VPS;

string check(string input){
    stack<char> s;
    for(int i=0; i<input.size(); i++){
        if(input[i] == '(')
            s.push('(');
        else{
            if(s.empty()) return "NO";
            s.pop();
        }
    }
    if(s.empty())
        return "YES";
    else{
        return "NO";
    }

}

int main(){
    cin >> T;

    for(int i=0; i<T; i++){
        cin >> VPS;
        cout << check(VPS) << "\n";
    }
}