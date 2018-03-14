#include <iostream>
#include "Array.h"
#include "Tree.h"
using namespace std;
int main() {
    /*function to put all negative on left*/
   /* Array obj,obj1;
    obj.create();
    obj.display();
    obj.negativeLeftSide();
    obj.display();
    /*function to bring all Zero on left and ones on right
    obj1.create();
    obj1.display();
    obj1.seperateZeroOne();
    obj1.display();*/
    
    /*function to call tree*/
    node *root,*root1;
    root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    postorder(root);
    cout<<endl;
    
    root1 = newnode(4);
    root1->left = newnode(5);
    root1->right = newnode(6);
    postorder1(root1);
    
    identicalTrees();
    return 0;
}

