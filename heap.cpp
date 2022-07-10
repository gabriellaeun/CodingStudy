#include <iostream>
using namespace std;

template <typename T>

class priority_queue {
    public :
        priority_queue(){
            _size = 0;
        }
        ~priority_queue(){

        }
        void push(T input){
            _size += 1;
            arr[_size] = input;
            int child = _size;
            int parent = child/2;

            while(child > 1){
                if(arr[child] > arr[parent]){
                    T temp = arr[child];
                    arr[child] = arr[parent];
                    arr[parent] = temp;
                    child = parent;
                    parent = child/2;
                }
                else{
                    break;
                }
            }
        }
        void pop(){
            //루트 위치에 가장 마지막 데이터를 올리기
            arr[1] = arr[_size];
            _size -= 1;
            int parent = 1;
            int child = parent * 2;
            //자식이 존재하는 조건에서만 비교할 수 있으니까
            while(child <= _size){
                //오른쪽 자식이 존재하면서, 왼쪽보다 오른쪽 자식의 값이 더 큰 경우
                //오른쪽 자식과 비교해야한다.
                if(child + 1 <= _size && arr[child] < arr[child + 1]){
                    if(arr[child] < arr[child + 1]){
                        child += 1;
                    }
                    if(arr[parent] < arr[child]){
                        T temp = arr[child];
                        arr[child] = arr[parent];
                        arr[parent] = temp;
                        parent = child;
                        child = parent*2;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        T top(){
            return arr[1];
        }
        bool empty(){
            return _size == 0 ? true : false;
        }
    private :
        T arr[10000];
        int _size;
};

int main(){
    priority_queue<int> pq;
    for(int i=0; i<10; i++){
        pq.push(rand()%100);
    }
    while(!pq.empty()){
        cout << pq.top() << "\n";
        pq.pop();
    }
}