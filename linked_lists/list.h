#include<bits/stdc++.h>

class list{
    public:
        int data;
        list* next;
        // node* tail; points to the last block of the list
        list(int val){
            data = val;
            next = NULL;
        }

        void append(int val){
            list* last = next;
            if(next==NULL){
                next = new list(val);
            }
            else{
                while (last->next!=NULL)
                {
                    last = last->next;
                }
                last->next = new list(val);
            }
        }
};

void print(list* root){
    std::cout<<root->data<<std::endl;
    if(root->next!=NULL){
        print(root->next);
    }
}

list* last_node(list* root){
    while (root->next!=NULL){
        root = root->next;
    }
    return (root);
}

int count(list* root)
{
        int counter = 1;
        list* head = root;
        do{
            head = head->next;
            counter+=1;
        } while (head->next!=NULL);       
return counter;
}

int count_bet(list* root, list* add)
{
        int c2 = 1;
        list* head = root;
        while(head != add)
        {
            c2+=1;
            head = head->next;
        }
return c2;
}

void insert(list* root, list* add, int data)
{
    if (add->next==NULL){
        add->next=new list(data);
    }
    else{
        list* head = root;

        int counter = count(root);
        int till_add = count_bet(root,add);
        int once = 0;

        list* last = root->next; 
        for (int i=counter; i>=till_add; i--)
        {
            list* head2 = root;
            for(int j=1; j<i;j++)
            {
                head2 = head2->next;  
            }
            if(once==0){
                // last = head2;
                head2->next = new list(head2->data);
                once+=1;
            }
            else
            {
                head2->next->data=head2->data;
            }
        }
        add->data = data;     
    }
}
