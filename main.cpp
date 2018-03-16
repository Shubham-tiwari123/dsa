#include <iostream>
#include "Array.h"
#include "Tree.h"
using namespace std;
int main() {
    /*function to put all negative on left*/
    Array obj,obj1;
    obj.create();
    obj.display();
    obj.negativeLeftSide();
    obj.display();
    /*function to bring all Zero on left and ones on right*/
    obj1.create();
    obj1.display();
    obj1.seperateZeroOne();
    obj1.display();

    /*function to call tree*/
    node *root1 = newNode(1);
    node *root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5);

    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);

    cout<<"\nfirst tree:-\n";
    levelOrder(root1);

    cout<<"\nsecond tree:-\n";
    levelOrder2(root2);

    compare();
    return 0;
}

