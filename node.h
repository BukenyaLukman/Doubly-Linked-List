#ifndef D_NODE
#define D_NODE
#include<iostream>


typedef std::string Elem;
class DNode {
    
private:
    Elem elem;
    DNode* prev;
    DNode* next;
    friend class DLinkedList;
};


#endif