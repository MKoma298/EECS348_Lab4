CC = gcc
CFLAGS = -Wall -Wextra

all = task1 task2

task1: task1.C
    $(CC) $(CFLAG) task1.c -o task1

task2: task2.C
    $(CC) $(CFLAGS) task2.c -o task2
    
clean:
    rm -f task1 task2