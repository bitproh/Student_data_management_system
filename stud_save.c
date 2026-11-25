#include "student.h"

void stud_save(SLL *ptr){
 
    FILE *fp=fopen("student.dat","w");
    if(fp==0){
        printf("Error opening file\n");
        return;
    }
    while(ptr){
        fprintf(fp,"%d  %s  %f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
    printf("Data is saved in file\n");
    fclose(fp);
}

void stud_read(SLL **ptr){
    SLL *new;
    FILE *fp;
    fp=fopen("student.dat","r");
    if(fp==0){
        printf("File not present\n");
        return;
    }
    while(1){
        int rno;
        char name[50];
        float pct;
        if(fscanf(fp,"%d%s%f",&rno,name,&pct)!=3)
        break;
        new=malloc(sizeof(SLL));
        new->rollno=rno;
        strcpy(new->name,name);
        new->percentage=pct;
        new->next=0;
        if(*ptr==0)
         *ptr=new;
        else{
            SLL *last=*ptr;
            while(last->next)
             last=last->next;
            last->next=new;
        }
    }
    fclose(fp);
}