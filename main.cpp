#include <iostream>
#include "Array.h"
using namespace std;
int main() {
    /*function to put all negative on left*/
    Array obj,obj1;
    obj.create();
    obj.dispay();
    obj.negativeLeftSide();
    obj.dispay();
    /*function to bring all Zero on left and ones on right*/
    obj1.create();
    obj1.dispay();
    obj1.seperateZeroOne();
    obj1.dispay();
    return 0;
}

