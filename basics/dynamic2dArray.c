#include <stdio.h>
#include <stdlib.h>

int main(){
    int **x,rows=3,columns=3;
    
    x=calloc(rows,sizeof(int *));

    for(int i=0;i<columns;i++){
        x[i]=calloc(columns,sizeof(int));
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
}   