//
// Created by andro on 19/5/2022.
//

#ifndef DATASTRUCTURES_NODE_H
#define DATASTRUCTURES_NODE_H

using namespace std;
template <class T>
class Node{

public:
    T value;
    Node<T> *next;
    Node(T value) : value(value) {}

    Node() {}
};


#endif //DATASTRUCTURES_NODE_H
