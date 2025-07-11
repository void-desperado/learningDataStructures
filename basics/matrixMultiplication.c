#include <stdio.h>
#include <stdlib.h>

void mult(int **a,int **b,int **c, int rows, int columns){
    int sum;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            sum=0;
            for(int k=0;k<rows;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
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
    mult(a,b,c,rows,columns);
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