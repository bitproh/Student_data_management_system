#include "student.h"
int find_no(SLL *);

int find_rno(SLL *ptr){
    int roll = 1;
    while(1){
        int taken = 0;
        SLL *now=ptr;

        while(now){
            if(now->rollno==roll){
                taken = 1;
                break;
            }
            now= now->next;
        }
        if(!taken){
            return roll;
        }
        roll++;
    }

}
void stud_add(SLL **ptr)
{
    SLL *new;
    new = malloc(sizeof(SLL));
    
    if(!new){
        return;
    }
    
    printf("Enter student name and percentage:\n");
    scanf("%s%f",new->name,&new->percentage);
    new->next = 0;
    if(*ptr==0){
        new->rollno = find_rno(*ptr);
        *ptr=new;

    }
    else{
        SLL *last = *ptr;
        int rno = find_rno(*ptr);
        while(last->next)
        {
            last = last->next;
        }
        new->rollno = rno;
        last->next=new;
    }

}