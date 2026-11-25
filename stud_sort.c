#include "student.h"

void stud_sort(SLL *ptr){
    if(ptr==0){
        printf("No records found\n");
        return;
    }
    printf("N/n : Sort with name\nP/p : Sort with percentage\n");
    char op;
    scanf(" %c",&op);
    if(op=='N'||op=='n'){
        int i,j,c=countNode(ptr);
        SLL *p1=ptr,*p2,t;
        for(i=0;i<c-1;i++){
            p2=p1->next;
            for(j=0;j<c-i-1;j++){
                if(strcmp(p1->name,p2->name)>0){
                    t.rollno=p1->rollno;
                    strcpy(t.name,p1->name);
                    t.percentage=p1->percentage;

                    p1->rollno=p2->rollno;
                    strcpy(p1->name,p2->name);
                    p1->percentage=p2->percentage;

                    p2->rollno=t.rollno;
                    strcpy(p2->name,t.name);
                    p2->percentage=t.percentage;
                }
                p2=p2->next;
            }
            p1=p1->next;
        }
    }else if(op=='P'||op=='p'){
        int i, j, c = countNode(ptr);
        SLL *p1 = ptr, *p2, t;
        for (i = 0; i < c - 1; i++) {
            p2 = p1->next;
            for (j = 0; j < c - i - 1; j++) {
                if (p1->percentage < p2->percentage) {
                    t.rollno = p1->rollno;
                    strcpy(t.name, p1->name);
                    t.percentage = p1->percentage;

                    p1->rollno = p2->rollno;
                    strcpy(p1->name, p2->name);
                     p1->percentage = p2->percentage;

                    p2->rollno = t.rollno;
                    strcpy(p2->name, t.name);
                    p2->percentage = t.percentage;
                }
                p2 = p2->next;
            }
            p1 = p1->next;
        }
    }else{
        printf("Invalid Input\n");
        return;
    }
}

int countNode(SLL *ptr){
    int c=0;
    while(ptr){
        c++;
        ptr=ptr->next;
    }
    return c;
}

void stud_rev(SLL **ptr){
    if(*ptr==0){
        printf("No records found\n");
        return;
    }
    SLL *prev=NULL,*curr=*ptr,*next=NULL;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *ptr=prev;
    printf("List reversed successfully\n");
}