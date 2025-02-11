CC = gcc
CFLAGS = -Wall

all: taskmanager

taskmanager: processes.o taskmanager.o
	$(CC) $(CFLAGS) -o taskmanager processes.o taskmanager.o

processes.o: processes.c processes.h
	$(CC) $(CFLAGS) -c processes.c

taskmanager.o: taskmanager.c processes.h
	$(CC) $(CFLAGS) -c taskmanager.c

clean:
	rm -f *.o taskmanager
