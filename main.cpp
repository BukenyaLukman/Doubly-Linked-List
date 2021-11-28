#include<iostream>
#include "doubly_linked_list.h"

DLinkedList::DLinkedList() {
    header = new DNode;
    trailer = new DNode;
    header->next = trailer;
    trailer->prev = header;
} 

// create sentinels
DLinkedList::~DLinkedList() {
    while (!empty()) removeFront();
    delete header;
    delete trailer;
}

// is list empty?
bool DLinkedList::empty() const
{ 
    return (header->next == trailer); 
} 

// get front element
const Elem& DLinkedList::front() const
{ 
    return header->next->elem; 
}

const Elem& DLinkedList::back() const
{
    return trailer->prev->elem; 
}
void DLinkedList::addFront(const Elem& e) // add to front of list
{ 
    add(header->next, e); 
}
void DLinkedList::addBack(const Elem& e) // add to back of list
{ 
    add(trailer, e); 
}
void DLinkedList::remove(DNode* v) {
    DNode* u = v->prev;
    DNode* w = v->next;
    u->next = w;
    w->prev = u;
    delete v;
}

void DLinkedList::removeFront()
{ 
    remove(header->next); 
} 
// remove from font

void DLinkedList::removeBack()
{ 
    remove(trailer->prev); 
}


int main(){



    return 0;
}
