#include<bits/stdc++.h>

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
    void append(std::string s, int data){
        if(s=="left")
        {
            
        }
    }
};

void print(node* sample){
    std::cout<<sample->data<<std::endl;
    if (sample->left!=NULL)
        print(sample->left);
    if (sample->right!=NULL)
        print(sample->right);
}

void insert(node* address,int data){
    //Insert at left as default.
    if (address == NULL){
        address->left=new node(data); 
    }
    //move everthing to a lower level, don't do copy paste shit.
    node* root2 = new node(address->data);
    if (address->left!=NULL){
        if (address->left!=NULL){
            
        }
    } 
}