#include "node.h"

class DLinkedList {
    public:
        DLinkedList();
        ~DLinkedList();
        bool empty() const;
        const Elem& front() const;
        const Elem& back() const;
        void addFront(const Elem& e);
        void addBack(const Elem& e);
        void removeFront();
        void removeBack();


    private:
        DNode* header;
        DNode* trailer;

    protected:
        void add(DNode* v, const Elem& e);
        void remove(DNode* v);

    void add(DNode* v, const Elem& e){
        DNode* u = new DNode; 
        u->elem = e;
        u->next = v;
        u->prev = v->prev;
        v->prev->next = v->prev = u;
    }

};


