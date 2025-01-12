#include <stdlib.h>
typedef struct LNode{
    int data; //datum
    LNode* next;    //pointer
}LNode,*Linklist;

bool Initlist(Linklist &L){
    LNode *L = (LNode*) malloc(sizeof(LNode*));/*Initialize with head node: allocate a memory block to the pointer;
     LNode* pointer points to a specify address in the memory*/
    L->next = NULL;//Make sure the current next (LNode*) is pointing at NULL
    /*
    when initializing without a head LNode
        L = NULL;
    */
    return true;
}

bool ListInsert(Linklist &L, int i, int e)//insert a LNode at the place of i+1
{
    LNode *p =L; //set a pointer p that tracks every node in the Linklist
    int j = 0; //initialize a counter the tracks the place of pointer p

    //find the place i LNode that has an index of i-1
    while(p!=NULL&&j<i-1){//loop until a NULL; NULL means vacancy in the node
    //break when j = i-1
        p = p->next; //jump to next LNode*
        j++; //increment the LNode placement
    }
    if (p == NULL)
    {
        return false;
    }

    LNode* s = (LNode*) malloc (sizeof(LNode));
    s->data = e;

    s->next = p->next;
    p->next = s;
    return true;

}

bool Preinsert(Linklist &L, int i, int e)
{
    //Locate the head node as a LNode* and a counter
    LNode* p = L;
    int j = 0;

    //find the place i-1 LNode and check availbility
    while(p!=NULL && j<i-1)
    {
    p = p->next;
    j++;
    }

    if (p==NULL)
        return false;
    else{
        
        LNode *s = (LNode*) malloc(sizeof(LNode*));
        // originally p>>N
        s->next = p->next; //s and p share the same next LNode  s,p>>N
        p->next = s; // s turns to be the next LNode of p   p>>s>>N
        int temp = p->data; //switch data of s and p
        p->data = s->data;
        s->data = temp;
    }
}

int main(){
    Linklist L;
}