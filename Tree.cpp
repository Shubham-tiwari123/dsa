#include <iostream>
#include "Tree.h"
#include <stack>
using namespace std;
stack<int> s,s1;
node *temp;
struct node *newnode(int num){
    temp = new node;
    temp->data = num;
    temp->left = NULL;
    temp->right = NULL;
}

void postorder(struct node* temp){
    if (temp == NULL)
       return;
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<"\t";
    s.push(temp->data);
}

void postorder1(struct node* temp1){
    if (temp1 == NULL)
       return;
    postorder(temp1->left);
    postorder(temp1->right);
    cout<<temp1->data<<"\t";
    s1.push(temp1->data);
}

void identicalTrees()
{
    while(!s.empty()){
        if(s.top() == s1.top()){
            cout<<"\nequal";
            s.pop();
            s1.pop();
        }
        else{
            cout<<"\nnot equal";
            break;
        }
    }
} 