#include "list.h"

int main(){
    list* head = new list(1);
    head->append(2);
    head->append(3);
    head->append(4);
    insert(head,head->next,420);
    print(head);
    
return 0;
} 