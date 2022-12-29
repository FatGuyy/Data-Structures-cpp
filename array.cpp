#include<iostream>

template<typename T>class array{
    private:
        T* ptr;
        int size;
    
    public:
        array(int size){
            this->size = size;
            ptr = new T[size];
        }
        void append(T data){
            int count = 0;
            T i = *(ptr + count);
            while(i!='\0'){
                count++;
            }
            *(ptr + count) = data;
        }
        void print(){
            for(int i = 0; i<size; i++){
                std::cout<<" "<<*(ptr+i);
            }
        }
        T len(){
            return(size);
        }
        T sort(){
            // Quick sort is the fastest one. Implement that.
            // Partition function
            T partition(T* arr, int begin, int end){

                int count = 0;
                for(int i = begin; i<=end; i++){
                    if (arr[i] <= pivot){
                        count++;
                    }
                }

                int pivot = count + begin;
                // int pivotIndex = begin + count;
                while( begin < pivot && end > pivot){
                    continue;
                }

            }

            // quick function
        }

};

int main(){
    
    array<int> arr(5);
    arr.append(1);
    arr.print();

return 0;
}