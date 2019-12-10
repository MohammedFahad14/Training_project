#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define size 50
pthread_mutex_t lock;
extern int rear,front,queue[50],counter;

void *push(void *argf);
void *pop(void *argf);

