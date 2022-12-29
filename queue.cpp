#include<bits/stdc++.h>
// first in first out.

template <typename T> class Q{

public:
    T array[];
    int size;

};

void printQ(std::queue<int>& Q){
    while (!Q.empty()){
        std::cout<<Q.front()<<std::endl;
        Q.pop();
    }
}

int main(){
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    printQ(q);

// return 0;
}