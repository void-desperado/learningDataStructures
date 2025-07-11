#include <stdio.h>
#include <stdlib.h>

void transpose(int **a,int **b,int rows,int columns){
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            b[i][j]=a[j][i];
        }
    }
}
int main(){
    int **a,**b,m=3,n=4;
    a=calloc(m,sizeof(int*));
    b=calloc(n,sizeof(int*));
    for(int i=0;i<m;i++){
        a[i]=calloc(n,sizeof(int));
    }
    for(int i=0;i<n;i++){
        b[i]=calloc(m,sizeof(int));
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("A[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    transpose(a,b,m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        free(a[i]);
    }
    for (int i = 0; i < n; i++) {
        free(b[i]);
    }
    free(a);
    free(b);
}