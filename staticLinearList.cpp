#include <stdio.h>
#define Maxsize 10

typedef struct{
    int data[Maxsize];
    int length;
}Sqlist;

void Initlist(Sqlist &L){
    /*for(int i=0; i<Maxsize; i++)
        L.data[i]= '0';*/
    L.length=0;
}

int main(){
    Sqlist L;
    Initlist(L);
    for(int i =0; i<Maxsize; i++)
        printf("%d\n",L.data[i]);
    return 0;
}
