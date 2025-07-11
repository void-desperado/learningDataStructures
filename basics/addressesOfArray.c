#include <stdio.h>
#define MAXSIZE 10

void print1(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("Address of %dth element: %p\n",i+1,arr+i);
        printf("Value of %dth element:   %d\n\n",i+1,*(arr+i));
    }
}

int main(){
    int arr[MAXSIZE];
    for(int i=0;i<MAXSIZE;i++)
        arr[i]=i;
    print1(arr,MAXSIZE);
}