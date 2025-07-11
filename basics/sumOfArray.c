#include <stdio.h>
#define MAXSIZE 10
int sum(int *arr,int n);
int main(){
    int myArr[MAXSIZE];
    for(int i=0;i<MAXSIZE;i++)
        myArr[i]=i;
    int result=sum(myArr,MAXSIZE);
    printf("%d\n",result);

}

int sum(int *arr,int n){
    int result=0;
    for(int i=0;i<n;i++)
        result+=arr[i];
    return result;
}