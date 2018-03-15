#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include<queue>
#include<stack>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data);

void levelOrder(node *root);

void levelOrder2(node *root2);

int compare();

#endif // TREE_H_INCLUDED
