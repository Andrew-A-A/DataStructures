//
// Created by andro on 18/4/2022.
//

#include "ArrStack.h"

ArrStack::ArrStack(void) {
    elements=0;
    capacity=10;
    Arr= new int[capacity];
}

ArrStack::ArrStack(int size) {
elements=0;
capacity=size;
Arr=new int [capacity];
}

void ArrStack::push(int x) {
    elements++;
    if(elements>=capacity)
    {
    expand();
    }
    Arr[elements-1]=x;
}

int ArrStack::pop() {
    int m=Arr[elements-1];
    elements--;
    return m;
}

bool ArrStack::isEmpty() {
    if(elements==0)
        return true;
    else
        return false;
}

void ArrStack::expand() {
    int *tmp;
    tmp= new int[capacity*2];
    for (int i = 0; i < capacity; ++i) {
        tmp[i]=Arr[i];
    }
    capacity*=2;
    delete Arr;
    Arr=tmp;
}

ArrStack::~ArrStack(void) {
    delete Arr;
}
