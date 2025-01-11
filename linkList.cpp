#include <stdio.h>
//link list without head node
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode, *linkList;

bool InitList (LNode &L){
    L.data = NULL;
    return true;
}

void main(){
    linkList L;
    InitList(L);
}
