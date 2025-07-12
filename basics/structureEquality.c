#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
typedef struct{
    int day;
    int month;
    int year;
}date;
typedef struct{
    char name[50];
    int age;
    float salary;
    date dob;
}person;
int same(person *p1,person *p2){
    if((p1->name)==(p2->name)){
        if((p1->age)==(p2->age)){
            if((p1->salary)==(p2->salary)){
                if((p1->dob.day)==(p2->dob.day)){
                    if((p1->dob.month)==(p2->dob.month)){
                        if((p1->dob.year)==(p2->dob.year))
                            return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}