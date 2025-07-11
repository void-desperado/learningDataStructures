#include <stdio.h>
#include <stdlib.h>
#define MALLOC(p,s) \
    if(!((p)=malloc(s))){ \
        fprintf(stderr, "Insufficient memory"); \
        exit(EXIT_FAILURE); \
    }
#define SWAP(a,b,temp)\
    {\
        temp=*a;\
        *a=*b;\
        *b=temp;\
    }

void sort(int* arr,int n){
    int min,temp,i,j;
    for(i=0;i<n;i++){
        min=i;
        for(j=i;j<n;j++)
            if(arr[j]<arr[min])
                min=j;
        SWAP(&arr[i],&arr[min],temp);
    }
}

int main(){
    int *arr;
    MALLOC(arr,5*sizeof(int));
    arr[0]=5;
    arr[1]=3;
    arr[2]=1;
    arr[3]=8;
    arr[4]=2;
    sort(arr,5);
    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
}