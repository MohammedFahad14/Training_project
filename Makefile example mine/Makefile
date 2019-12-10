CC = gcc

CFLAG = -I . -c 


all: queue

queue: main.o queue_module.o 
	$(CC) main.o queue_module.o -o queue -lpthread

main.o: main.c
	$(CC) $(CFLAG) main.c

queue_module.o: queue_module.c
	$(CC) $(CFLAG) queue_module.c

clean: 
	rm *o queue
