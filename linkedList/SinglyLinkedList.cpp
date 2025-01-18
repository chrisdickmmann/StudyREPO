#include <cstdlib>
using namespace std;

typedef struct LNode{//struct LNode
    int data;
    LNode* next;
}LNode,*Linklist;

int initList (Linklist &L){//set NULL
    L = (LNode*) malloc (sizeof(LNode));
    if (L == NULL){
        return 1;
    }
    L->next = NULL;
    return 0;
}

int length(Linklist L){
    int len = 0;
    LNode *p = L; //point p to the head
    while (p->next != NULL){
        p = p->next;
        len++;
        }
    return len;
}

LNode *getNode(Linklist &L, int i){//find the LNode at i; Head Node IGNORED!!!
    if (i < 1){
        return NULL;
    }else{
        LNode *p = L;
        int j = 0;
        while(p != NULL && j < i-1){//pause when j = i - 2; pos i-1
            p = p->next;
            j++;
        }
        return p;
    }
}

int LocData(Linklist &L, int e){
    LNode *p = L;
    int i = 0;
    if (L->next == NULL){
        return NULL;
    }
    while(p->next != NULL){
        if(p->data == e){
            return i;
        }
    p = p->next;
    i++;
    }
    return NULL;
}

int insertNode(Linklist &L, int i, int e){
    LNode *p = getNode(L,i);
    LNode *s = (LNode*) malloc (sizeof(LNode));
    s->next = p->next;
    p->next = s; //pass next to s
    s->data = e; 
    return 0;
}


int main(int argc, char *argv[]){

    return 0;
}
