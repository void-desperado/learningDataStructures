#define MAX_LENGTH 101
#include <stdio.h>
#include <stdlib.h>

/*SET of rules to be followed for this implementation:
-list must end with '\0'
-indexes begin at 1*/

//create a new list with length MAX_LENGTH
int* create(){
    int* newList=(int*)calloc(MAX_LENGTH,sizeof(int));
    return newList;
}

//print the entire list
void print(int *myList){
    int i=0;
    while(myList[i]!='\0'){
        printf("%dth element: %d\n",i+1,myList[i]);
        i++;
    }
}

//add the null element at end of list with length n
void endList(int *myList,int n){
    myList[n]='\0';
}

//return the ith element of the list
int element(int *myList,int i){
    return myList[i-1];
}

//replace the ith element of the list
void replaceElement(int *myList,int i,int newElement){
    if(i<MAX_LENGTH){
        myList[i-1]=newElement;
    }
    else{
        printf("Invalid index provided");
    }
}

//return length of the list
int findLength(int *myList){
    int i=0;
    while(myList[i]!='\0')
        i++;
    return i;
}

//insert a new item at nth position
void insert(int *myList, int n,int newElement){
    int length=0;
    while(myList[length]!='\0')
        length++;
    int i=0;
    while(i<n)
        i++;
    i-=1;
    for(int j=length;j>=i;j--){
        myList[j+1]=myList[j];
    }
    myList[n-1]=newElement;
}

//add a new element at empty location
void newInsert(int *myList,int n, int newElement){
    myList[n-1]=newElement;
}

//delete the element at nth position
void delete(int* myList, int n){
    int i=n-1;
    while(myList[i]!='\0'){
        myList[i]=myList[i+1];
        i++;
    }
}

//free the list
void freeList(int *myList){
    free(myList);
}