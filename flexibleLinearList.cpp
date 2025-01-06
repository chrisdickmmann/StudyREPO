#include <stdlib.h>

#define Initsize 10

typedef struct{
    int *data;
    int Maxsize;
    int length;
}Seqlist;

void Initlist(Seqlist &L){
    L.data = (int*) malloc(sizeof(int)*Initsize);
    L.length = 0;
    L.Maxsize = Initsize;
}

void IncreaseSize(Seqlist &L, int len){
    int *p = L.data;
    L.data = (int*) malloc(sizeof(int)*(len+L.Maxsize));
    for(int i=0; i<L.length;i++)
        L.data[i] = p[i];
    L.Maxsize = L.Maxsize + len;
    free(p);
}

int main(){
    Seqlist L;
    Initlist(L);
    IncreaseSize(L,5);
    return 0;
}