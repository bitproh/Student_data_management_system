#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
}SLL;

void stud_add(SLL **);
void stud_show(SLL *);
void stud_del(SLL **);
void stud_mod(SLL *);