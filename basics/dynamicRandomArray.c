#include <stdio.h>
#include <stdlib.h>

int main(){
    int length[]={3,2,5,2,6};
    int **x;
    x=calloc(5,sizeof(int*));
    for(int i=0;i<5;i++){
        x[i]=calloc(length[i],sizeof(int));
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<length[i];j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
    x[1][1]=10;
        for(int i=0;i<5;i++){
        for(int j=0;j<length[i];j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
}