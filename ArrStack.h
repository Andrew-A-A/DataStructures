//
// Created by andro on 18/4/2022.
//

#ifndef DATASTRUCTURES_ARRSTACK_H
#define DATASTRUCTURES_ARRSTACK_H


class ArrStack {
int *Arr;
int elements,capacity;
public:
    ArrStack(void);
    ArrStack(int size);
    void push(int x);
    int pop();
    bool isEmpty();
    void expand();
    ~ArrStack(void );
};


#endif //DATASTRUCTURES_ARRSTACK_H
