//
// Created by andro on 19/5/2022.
//
#include "Node.h"
#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H
using namespace std;

template<class T>
class Linkedlist {
    Node<T> *head;
    Node<T> *tail;
    int size;
public:
    Linkedlist();
    int Lenght();
    void Append(T value);
     T At(int pos);
    void DeleteAt(int pos);
    void InsertAt(int pos, T Value);
    void MoveNode(int NewPos , T value);
    void Display();
    };



#endif //DATASTRUCTURES_LINKEDLIST_H
