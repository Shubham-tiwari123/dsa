#include <iostream>
#include "Tree.h"
using namespace std;
queue <node *> q1,q2;
stack <int> s1,s2;

struct node* newNode(int data)
{
    node *temp = new node;
    temp->data  = data;
    temp->left  = NULL;
    temp->right = NULL;
    return(temp);
}
void levelOrder(node *root){
    int num;
    q1.push(root);
    while(!q1.empty() || !q2.empty()){
        while(!q1.empty()){
            if(q1.front()->left != NULL)
                q2.push(q1.front()->left);

            if(q1.front()->right != NULL)
                 q2.push(q1.front()->right);
            cout<<q1.front()->data<<" ";
            num = q1.front()->data;
            s1.push(num);
            q1.pop();
        }
        cout<<endl;
        while (!q2.empty())
        {
            if (q2.front()->left != NULL)
                q1.push(q2.front()->left);

            if (q2.front()->right != NULL)
                q1.push(q2.front()->right);

            cout << q2.front()->data << " ";
            s1.push(q2.front()->data);
            q2.pop();
        }
        cout<<endl;
    }
}

void levelOrder2(node *root2){
    int num;
    q1.push(root2);
    while(!q1.empty() || !q2.empty()){
        while(!q1.empty()){
            if(q1.front()->left != NULL)
                q2.push(q1.front()->left);

            if(q1.front()->right != NULL)
                 q2.push(q1.front()->right);
            cout<<q1.front()->data<<" ";
            num = q1.front()->data;
            s2.push(num);
            q1.pop();
        }
        cout<<endl;
        while (!q2.empty())
        {
            if (q2.front()->left != NULL)
                q1.push(q2.front()->left);

            if (q2.front()->right != NULL)
                q1.push(q2.front()->right);

            cout << q2.front()->data << " ";
            s2.push(q2.front()->data);
            q2.pop();
        }
        cout<<endl;
    }
}

int compare(){
    int flag=0;
    int num,num1;
    while(!s1.empty()||!s2.empty()){
        num = s1.top();
        num1 = s2.top();
        if(num != num1){
            cout<<"not equal";
            flag=1;
            break;
        }
        s1.pop();
        s2.pop();
    }
    if(flag == 0){
        cout<<"Equal";
    }

}
