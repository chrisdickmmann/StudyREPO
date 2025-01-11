# define Initsize 100

typedef struct{
    int *data;
    int length, Maxsize;
}Seqlist;

void InitList(Seqlist &L){
    L.data = new int[Initsize];
    L.length = 0;
    L.Maxsize = Initsize;
}

bool InsertElem(Seqlist &L, int i, int e){
    if (i<1||i>L.length+1)
        return false;
    if (i>=L.Maxsize)
        return false;
    for (int j = L.length; j >= i; j--)
        L.data[j]=L.data[j-1];
    L.data[i]=e;
    L.length++;
    return true;
}

bool ListDelete(Seqlist &L, int i, int &e){
    if (i<1||i>L.length)
        return false;
    e = L.data[i-1];
    int j;
    for (j=i; j < L.length; j++)
        L.data[j-1] = L.data[j];
    L.length--;
    return true;
}

int locateElem(Seqlist L, int e){
    int i;
    for (i=0; i<L.length;i++)
        if (L.data[i]==e)
            return i+1;
        else 
            return 0;
}