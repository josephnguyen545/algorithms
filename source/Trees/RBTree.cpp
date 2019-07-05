#include <iostream>
#include "../Trees/BST.cpp"

Node* RBTree::rotateLeft(Node* node){
    //if(node->left == 1 && node->left->left == 1){
        //isRed(node->right);
        Node* temp = node->right;
        node->right = temp->left;
        temp->left = node;
        temp->color = node->color;
        node->color = 1;
        return temp; 

    //}
}

void RBTree::flippedColors(Node* n){
    color = isRed(n);
    isRed(n->left);
    isRed(n->right);
    n->color = 1;
    n->left->color = 0;
    n->right->color = 0;


}
