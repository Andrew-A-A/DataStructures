//
// Created by andro on 19/5/2022.
//

#include "Linkedlist.h"
#include <assert.h>
#include <iostream>

template<class T>
int Linkedlist<T>::Lenght() {
    return size;
}

template<class T>
void Linkedlist<T>::Append(T value) {
    Node<T>* NewNode=new Node<T>(value);
    if(size==0){
        head=tail=NewNode;

    }
    else {
        tail->next = NewNode;
        tail = NewNode;
    }
    size++;
}

template<class T>
T Linkedlist<T>::At(int pos) {
    assert(pos>=0 && pos<size);
    Node<T>* tmp=head;
    for (int i = 0; i < pos; ++i) {
        tmp=tmp->next;
    }
    return tmp->value;
}

template<class T>
void Linkedlist<T>::DeleteAt(int pos) {
    assert( pos>=0 && pos<size);
    Node<T>* tmp=head;
    Node<T>* deleted;
  if(pos==0){
      deleted=tmp;
      head=tmp->next;
      delete(deleted);
  }
  else if(pos==size-1){
      deleted=tail;
      for (int i = 0; i < pos-1; ++i) {
          tmp=tmp->next;
      }
      delete(deleted);
      tail=tmp;
      tmp->next=NULL;
  }
  else {
      for (int i = 0; i < pos - 1; ++i) {
          tmp = tmp->next;
      }
      deleted = tmp->next;
      tmp->next = deleted->next;
      delete (deleted);
  }
  size--;
}

template<class T>
void Linkedlist<T>::InsertAt(int pos, T Value) {
Node<T> *NewNode=new Node<T>(Value);
    if(pos==0){
        NewNode->next=head;
        head=NewNode;
    }
    else if(pos==size-1){
        tail->next=NewNode;
        tail=NewNode;
    }
    else{
        Node<T> *tmp=head;
        for (int i = 0; i < pos-1; ++i) {
            tmp=tmp->next;
        }
        NewNode->next=tmp->next;
        tmp->next=NewNode;
    }
    size++;
}

template<class T>
Linkedlist<T>::Linkedlist() {
    tail=head=0;
    size=0;
}

template<class T>
void Linkedlist<T>::MoveNode(int NewPos, T value) {
int OldPos=0;
Node<T> *tmp=head;
    while (tmp->value!=value){
        tmp=tmp->next;
        OldPos++;
        if(OldPos>=size)
            break;
    }
    OldPos++;
    tmp=tmp->next;
    InsertAt(NewPos,value);
    DeleteAt(OldPos);
}

template<class T>
void Linkedlist<T>::Display() {
    Node<T> *tmp=head;
    for(int i =0 ; i<size; i++){
        cout<<tmp->value<< endl;
        tmp=tmp->next;
    }

}


