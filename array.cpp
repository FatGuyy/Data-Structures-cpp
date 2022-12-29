#include<iostream>

template<typename T>class array{
    private:
        T* ptr;
        int size;
    
        // Partition function
        T partition(T* arr, int begin, int end){
                int pivot = arr[begin];
                int count = 0;
                for(int i = begin; i<=end; i++){
                    if (arr[i] <= pivot){
                        count++;
                    }
                }

                pivot = count + begin;
                // int pivotIndex = begin + count;
                while( begin < pivot && end > pivot){
                    continue;
                }

            }
        // quick-sort function

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
            // Quick sort is the fastest one. Implementation that.
            

        }

};

int main(){
    
    array<int> arr(5);
    arr.append(1);
    arr.print();

return 0;
}