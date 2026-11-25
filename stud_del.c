#include "student.h"

void stud_del(SLL **ptr)
{
    if(*ptr==0){
        printf("No records found\n");
        return;
    }
    char op;
    printf("R/r : Enter roll number to delete\nN/n : Enter name to delete\n");
    scanf(" %c",&op);
    
    if(op=='R'||op=='r'){
        int rno;
        scanf("%d",&rno);
        SLL *del=*ptr,*prev;
        while(del){
            if(del->rollno==rno){
                if(*ptr==del)
                *ptr=del->next;
                else
                prev->next=del->next;

                free(del);
                return;
            }
            prev=del;
            del=del->next;
        }
        printf("Roll number not found\n");

        
    }
    
    else if(op=='N'||op=='n'){
        char d_name[50];
        scanf("%s",d_name);
        SLL *del=*ptr,*prev;
        while(del){
            if(strcmp(del->name,d_name)==0){
                if(*ptr==del)
                *ptr=del->next;
                else
                prev->next=del->next;

                free(del);
                return;
            }
            prev=del;
            del=del->next;
        }
        printf("Name not found\n");
        
    }
    else
    printf("Invalid input");
}

void stud_del_all(SLL **ptr){
    if(*ptr==0){
        printf("No records found\n");
        return;
    }
    SLL *curr=*ptr,*temp;
    while(curr){
        temp=curr->next;
        free(curr);
        curr=temp;
    }
    *ptr=NULL;
    printf("All records deleted\n");
}