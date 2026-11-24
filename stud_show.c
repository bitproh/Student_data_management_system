#include "student.h"

void stud_show(SLL *ptr)
{
    printf("------------------------------------------------------\n");
    printf("Roll No.    Name     Percentage\n");
    printf("------------------------------------------------------\n");
    if(ptr==0){
        printf("No records found\n");
        return;
    }
    while(ptr){
        printf("%d         %s       %f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
    printf("------------------------------------------------------\n");
}