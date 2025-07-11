#include <stdio.h>
#include <stdlib.h>

void transpose(int **a,int **b,int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            b[i][j]=a[j][i];
        }
    }
}
int main(){
    int **a,**b,rows=3;
    a=calloc(rows,sizeof(int*));
    b=calloc(rows,sizeof(int*));
    for(int i=0;i<rows;i++){
        a[i]=calloc(rows,sizeof(int));
        b[i]=calloc(rows,sizeof(int));
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            printf("A[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    transpose(a,b,rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(a[i]);
        free(b[i]);
    }
    free(a);
    free(b);
}