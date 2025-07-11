#include <stdio.h>
#include <stdlib.h>

void add(int **a,int **b,int **c, int rows, int columns){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
int main(){
    int **a,**b,**c,rows=3,columns=3;
    a=calloc(rows,sizeof(int*));
    b=calloc(rows,sizeof(int*));
    c=calloc(rows,sizeof(int*));
    for(int i=0;i<columns;i++){
        a[i]=calloc(columns,sizeof(int));
        b[i]=calloc(columns,sizeof(int));
        c[i]=calloc(columns,sizeof(int));
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("A[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
            printf("B[%d][%d]=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    add(a,b,c,rows,columns);
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(a[i]);
        free(b[i]);
        free(c[i]);
    }
    free(a);
    free(b);
    free(c);
}