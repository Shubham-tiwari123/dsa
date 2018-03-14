#include <iostream>
#include <cstring>
#include "Array.h"
using namespace std;

void Array::create(){
    cout<<"Enter no of elements:-";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"\nEnter number:-";
        cin>>a[i];
    }
}

void Array::display(){
    cout<<"\nDisplaying elements:-";
    for(int i=0;i<num;i++){
        cout<<a[i]<<"\t";
    }
}

void Array::negativeLeftSide(){
    int temp[num];
    int j=0;
    for(int i=0;i<num;i++){
        if(a[i]>=0)
            temp[j++]=a[i];
    }
    for(int i=0;i<num;i++){
        if(a[i]<0)
            temp[j++]=a[i];
    }
    memcpy(a,temp,sizeof(temp));
}

void Array::seperateZeroOne(){
    for(int i=0;i<num;i++){
        if(a[i]==0)
            count++;
    }
    for(int i=0;i<count;i++)
        a[i] = 0;
    
    for(int i=count;i<num;i++)
        a[i] =1;
}