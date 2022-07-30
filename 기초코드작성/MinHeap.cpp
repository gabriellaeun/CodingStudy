#include <iostream>
#include <ctime>
using namespace std;

template <typename T>

class MinHeap{
    public :
        MinHeap(){
            _size = 0;
        }
        ~MinHeap(){

        }
        void push(T input){
            _size += 1;
            arr[_size] = input;
            int child = _size;
            int parent = child/2;

            while(child > 1){
                if(arr[child] < arr[parent]){
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
            arr[1] = arr[_size];
            _size -= 1;
            int parent = 1;
            int child = parent * 2;

            while(child <= _size){
                if((child+1 <= _size) && (arr[child] > arr[child+1])){
                    child += 1;
                }

                if(arr[parent] > arr[child]){
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
        T top(){
            return arr[1];
        }
        bool empty(){
            return _size == 0 ? true : false;
        }
    private :
        T arr[100001];
        int _size;
};

int main()
{
    clock_t start, finish;
    double duration;

    start = clock();

    MinHeap<int> m;

    for(int i=0; i<100000; i++){
        m.push(rand()%1000000);
    }

    while(!m.empty()){
        cout << m.top() << "\n";
        m.pop();
    }

    finish = clock();

    duration = (double)(finish-start)/CLOCKS_PER_SEC;
    cout << duration << "초" <<endl;

    return 0;
}