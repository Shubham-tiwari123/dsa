#ifndef TREE_H
#define TREE_H

struct node{
    int data;
    node *left;
    node *right;
};
int flag =0;
struct node *newnode(int data);
void postorder(struct node* temp);
void postorder1(struct node* temp1);
void identicalTrees();
#endif /* TREE_H */

