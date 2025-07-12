#include <stdio.h>
#include <string.h>

typedef struct{
    char name[10];
    long distance;
    int moons;
}planet;

int main(){
    planet p1;
    fgets(p1.name,10,stdin);
    fflush(stdin);
    scanf("%ld",&p1.distance);
    scanf("%d",&p1.moons);
    printf("%s %ld %d\n",p1.name,p1.distance,p1.moons);
}