#include <stdio.h>
#include <string.h>
typedef struct{
    int day;
    int month;
    int year;
}date;

typedef struct{

}singleInfo;

typedef struct{
    date marriageDate;
}marriedInfo;

typedef struct{
    date marriageDate;
    date deathDate;
}widowedInfo;

typedef struct{
    date divorceDate;
    int nDivorces;
}divorcedInfo;

typedef union{
    enum{
        single,married,widowed,divorced
    }status;
    singleInfo infoSingle;
    marriedInfo infoMarried;
    widowedInfo infoWidowed;
    divorcedInfo infoDivorced;
}relationStatus;

typedef struct{
    char name[50];
    int age;
    float salary;
    date dob;
    relationStatus relationInfo;
}humanBeing;

int main(){
    humanBeing p1;
    fgets(p1.name,50,stdin);
    fflush(stdin);
    scanf("%d",p1.age);
    scanf("%f",p1.salary);
    scanf("%d",p1.dob.day);
    scanf("%d",p1.dob.month);
    scanf("%d",p1.dob.year);
    scanf("%d",p1.relationInfo.status);
    if(p1.relationInfo.status==0){

    }
    else if(p1.relationInfo.status==1){
        scanf("%d",p1.relationInfo.infoMarried.marriageDate);
    }
    else if(p1.relationInfo.status==2){
        scanf("%d",p1.relationInfo.infoWidowed.marriageDate);
        scanf("%d",p1.relationInfo.infoWidowed.deathDate);
    }
    else{
        scanf("%d",p1.relationInfo.infoDivorced.divorceDate);
        scanf("%d",p1.relationInfo.infoDivorced.nDivorces);
    }
}