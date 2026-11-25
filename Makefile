CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = student.exe
SRCS = stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c stud_sort.c

all: $(TARGET)

$(TARGET): $(SRCS) student.h
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	del /Q $(TARGET) 2>nul || true

.PHONY: all clean