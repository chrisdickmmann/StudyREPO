#define Maxsize 50
typedef struct{
    int data[Maxsize];
    int length;
}Sqlist;

void InitList(Sqlist &L);
int Length(Sqlist L);
int LocateElem(Sqlist L, int e);
int GetElem(Sqlist L, int i);
bool ListInsert(Sqlist &L, int i, int e);
bool ListDelete(Sqlist &L, int i, int &e);
void PrintList(Sqlist L);
void Empty(Sqlist L);
void Destroy(Sqlist &L);

//main func
int main(){
    Sqlist L;
    InitList(L);
    return 0;
}

void Initlist(Sqlist &L) {
    L.length = 0;
}

bool ListInsert(Sqlist &L,int i,int e){
    if (i<1||i>L.length+1)
        return false;
    if (L.length>=Maxsize)
        return false;
    for (int j = L.length; j>i; j--)
        L.data[j]=L.data[j-1];
    L.data[i-1] = e;
    L.length++;
    return true;
}

bool ListDelete(Sqlist &L, int i, int &e){
    if (i<1||i>L.length)
        return false;
    e = L.data[i-1];
    for (int j=i; j<L.length;j++)
        L.data[j-1]=L.data[j];
    L.length--;
    return true;
}

int LocateElem(Sqlist L, int e){
    int i;
    for (i=0; i<=L.length-1; i++)
        if (L.data[i] == e)
            return i+1;
        else
            return 0;
}