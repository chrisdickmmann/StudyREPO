#include <iostream>
using namespace std;

# define Initsize 100

typedef struct{
    int *data; //pointer to the dynamic array
    int length, Maxsize; //number of elements and Maxium size
}Seqlist;

//Function to initialize the sequential list
void InitList(Seqlist &L){
    L.data = new int[Initsize];
    for (int i = 0; i < Initsize; i++)
        L.data[i] = 0;
    L.length = 0;
    L.Maxsize = Initsize;
}

// count the length of list
int listLen(Seqlist L){
    return L.length;
}

//function to insert an element to the sequential list
bool InsertElem(Seqlist &L, int i, int e){
    if (i < 1 || i > L.length + 1) //check if the position is valid
        return false;
    if (L.length >= L.Maxsize){//check if the list is full
        int *newData = new int[L.Maxsize*2];
        for (int j = 0; j<L.length; j++){
            newData[j] = L.data[j];
        }
        delete[] L.data;
        L.data = newData;
        L.Maxsize *= 2;
    }
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
    return 0;
}

int getElem(Seqlist L, int e){
    for (int i = 0; i < L.length; i++){
        if (L.data[i] == e){
            return i+1;
        }
    }
    return 0;
}

void printList(Seqlist L){
    if (L.length == 0){
        cout << "This list is empty." << endl;
        return;
    }
    
    for (int i = 0; i<L.length; i++){
        cout << L.data[i]<< "";
    }
    cout << endl;
}

bool Empty(Seqlist L){
    if (L.length == 0){
        return true;
    }else{
        return false;
    }
}

bool Destrlist(Seqlist &L){
    delete[] L.data;
    L.length = 0;
    L.Maxsize = 0;
    return true;
}

int main(){
    Seqlist L;
    InitList(L);
    cout << Empty(L) << endl;
    cout << InsertElem(L,0,1) << endl;
    InsertElem(L,1,10);
    InsertElem(L,2,20);
    InsertElem(L,3,30);
    InsertElem(L,4,40);
    cout << L.data[0] << endl;
    cout << Empty(L) << endl;
    printList(L);
    cout << listLen(L) << endl;
    cout << locateElem(L,10) << endl;
    cout << getElem(L,2) << endl;
    int temp;
    cout << ListDelete(L,2,temp) << endl;
    cout << temp << endl;
    Destrlist(L);
    Empty(L);

    return 0;

}