# Student Record Management System (C)

A menu-driven C application that manages student records in memory using a dynamically allocated **Singly Linked List (`SLL`)** and persists records to **`student.dat`**.

## Project Structure

```text
.
├── student.h      # Data structures (SLL) and function declarations
├── stud_main.c    # Entry point, startup file loading, and menu loop
├── stud_add.c     # Add new record (dynamic allocation + smallest unused rollno)
├── stud_del.c     # Delete record by roll number or name
├── stud_show.c    # Display student records
├── stud_mod.c     # Modify existing student record
├── stud_sort.c    # Sort records (e.g., by name or percentage)
├── stud_save.c    # Save/load records with student.dat
├── Makefile       # Build and clean configuration
└── student.dat    # Saved student records file (generated/updated on save)