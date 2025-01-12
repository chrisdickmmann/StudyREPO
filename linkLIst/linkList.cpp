#include <cstdlib>
typedef struct LNode{
    int data;
    LNode* next;
}LNode,*Linklist;

bool InitList(Linklist &L)
{
    L = NULL;
    return true;
}

bool ListInsert(Linklist &L, int i, int e)
{
    //find place i node
    if (L==NULL){
        LNode* s = (LNode*)malloc(sizeof (LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }
}