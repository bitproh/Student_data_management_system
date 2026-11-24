#include <stdio.h>
#include <string.h>
#include "student.h"

void stud_mod(SLL *ptr){
    if(ptr==0){
        printf("No records found\n");
        return;
    }
    SLL *first = ptr;
    printf("Enter the record to search for modification\n\n");
    printf("R/r : Search by roll number\n");
    printf("N/n : Search by name\n");
    printf("P/p : Search by percentage\n");
    char op,name[50];
    float percent;
    int rno;
    scanf(" %c",&op);
    
    if(op == 'R' || op == 'r'){
        printf("Enter roll number:\n");
        
        scanf("%d",&rno);
        int found = 0;
        while(ptr){
            if(ptr->rollno==rno){
                found = 1;
                printf("%d  %s  %f\n",ptr->rollno,ptr->name,ptr->percentage);
                printf("Enter new name and percentage\n");
                scanf("%s%f",ptr->name,&ptr->percentage);
            }
            ptr=ptr->next;
        }
        if(!found){
            printf("Roll number not found\n");
        }
    }
    else if(op=='N' || op=='n'){
        printf("Enter name:\n");
        scanf("%s",name);
        int c=0;
        while(ptr){
            if(strcmp(ptr->name,name)==0){
                printf("%d  %s  %f\n",ptr->rollno,ptr->name,ptr->percentage);
                c++;
            }
            ptr=ptr->next;
        }
       
        if(c == 0){
            printf("Name not found\n");
            return;
        }
        if(c>1){
            printf("Choose the roll no of student:\n");
           
            scanf("%d",&rno);
            while(first){
                if(first->rollno==rno){
                    printf("Enter new roll number and percentage:\n");
                    scanf("%d%f",&first->rollno,&first->percentage);
                }
                first=first->next;
            }
        }
        else{
            printf("Enter new roll number and percentage:\n");
            while(first){
                if(strcmp(first->name,name)==0){
                    scanf("%d%f",&first->rollno,&first->percentage);
                }
                first=first->next;
            }
        }
    }else if(op=='P' || op== 'p'){
        printf("Enter percentage:\n");
       
        scanf("%f",&percent);
        int c=0;
        while(ptr){
            if(ptr->percentage==percent){
                printf("%d  %s  %f\n",ptr->rollno,ptr->name,ptr->percentage);
                c++;
            }
            ptr=ptr->next;
        }
      
        if(c == 0){
            printf("Percentage not found\n");
            return;
        }
        if(c>1){
            printf("Choose the roll no of student:\n");
            // [CHANGE 6] Was: scanf("%d",&op);
            scanf("%d",&rno);
            while(first){
                if(first->rollno==rno){
                    printf("Enter new roll number and name:\n");
                    scanf("%d%s",&first->rollno,first->name);
                }
                first=first->next;
            }
        }
        else{
            printf("Enter new roll number and name:\n");
            while(first){
               
                if(first->percentage == percent){
                    scanf("%d%s",&first->rollno,first->name);
                }
                first=first->next;
            }
        }
    }else{
        printf("Invalid Input\n");
    }
}