#include <stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%p\n",&arr[i][j]);
            printf("%p\n\n",(*(arr+i)+j));
        }
        printf("\n");
    }
}