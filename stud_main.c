#include "student.h"

int main(void)
{
    char op;
    SLL *headptr = NULL;

    stud_read(&headptr);


    while (1) {
        printf("\n********* STUDENT RECORD MENU ***********\n");
        printf("a/A : Add new record\nd/D : Delete a record\ns/S : Show the list\nm/M : Modify a record\nv/V : Save records\n");
        printf("e/E : Exit\nt/T : Sort the list\nl/L : Delete all the records\nr/R : Reverse the list\n");
        printf("\nEnter your choice: ");

        if (scanf(" %c", &op) != 1) {
            break;
        }

        switch (op) {
            case 't':
            case 'T':
                stud_sort(headptr);
                break;

            case 'l':
            case 'L':
                stud_del_all(&headptr);
                break;

            case 'r':
            case 'R':
                stud_rev(&headptr);
                break;

            case 'a':
            case 'A':
                stud_add(&headptr);
                break;

            case 's':
            case 'S':
                stud_show(headptr);
                break;

            case 'e':
            case 'E':
                printf("S/s : Save and exit\nE/e : Exit without saving\n");
                char ch;
                scanf(" %c",&ch);
                switch(ch){
                    case 'S':
                    case 's':
                        stud_save(headptr);
                        exit(0);
                    case 'E':
                    case 'e':
                        exit(0);
                }break;
            case 'd':
            case 'D':
                stud_del(&headptr);
                break;

            case 'm':
            case 'M':
                stud_mod(headptr);
                break;

            case 'v':
            case 'V':
                stud_save(headptr);
                break;

            default:
                printf("Invalid Input\n");
                break;
        }
    }

    return 0;
}