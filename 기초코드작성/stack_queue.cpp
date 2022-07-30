
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
        void pop(){
            _top -= 1;
            return;
        }
        bool empty() {
            return (_top == -1 ? true : false);
        }
        int size(){
            return _top+1;
        }

    private :
        T arr[10001];
        int _top;
};

template <typename T>
class queue{
    public :
        queue(){
            _front = -1;
            _end = 0;
            MAX_SIZE = 10000;
            _size = 0;
        }
        ~queue(){

        }
        void push(T input){
            arr[_end] = input;
            _end += 1;
            _end %= MAX_SIZE;
            _size += 1;
            return;
        }
        void pop(){
            _front += 1;
            _front %= MAX_SIZE;
            _size -= 1;
            return;
        }
        T front(){
            return arr[(_front+1)%MAX_SIZE];
        }
        bool empty(){
            return _size == 0 ? true : false;
        }
    private :
        T arr[10000];
        int _front;
        int _end;
        int MAX_SIZE;
        int _size;
};

int main(){
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.size() << "개\n";
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
    
    queue<string> q;
    q.push("cho");
    q.push("hyun");
    q.push("eun");
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}