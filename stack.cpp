#include<bits/stdc++.h>
//first in last out.
void print(std::stack<int>& s){
    while (!s.empty()){
        std::cout<<s.top()<<std::endl;
        s.pop();
    }
    
}

int main(){
    std::stack<int> some;

    some.push(1);
    some.push(2);
    some.push(3);
    some.push(4);
    some.push(5);

    print(some);
    std::cout<<"Next iteration."<<std::endl;
    print(some);
    std::cout<<"dont iterating."<<std::endl;
    

return 0;
}