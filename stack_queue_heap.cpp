
#include <iostream>
using namespace std;

template <typename T>

class stack{
    public :
        stack(){ //생성자
            _top = -1;
        }
        ~stack(){ //소멸자

        }
        void push(T input){
            arr[_top+1] = input;
            _top+=1;
            return;
        }
        T top(){
            return arr[_top];
        }

    private :
        T arr[10000];
        int _top;
};

int main(){
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout << s.top();
}