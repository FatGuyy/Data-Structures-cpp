#include "bTree.h"

int main(){
    node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);

    root->right->left = new node(5);
    root->right->right = new node(6);

    root->right->right->left = new node(7);
    root->right->right->left->left = new node(9);
    root->right->right->left->left->left  = new node(10);
    root->right->right->right = new node(8);
    // std::cout<<"This is size :"<<sizeof(root)<<std::endl;

    print(root);
return 0;
}
