#include "queue_module.h"
#define size 50
pthread_mutex_t lock;
int rear=-1,front=-1,queue[50],counter=0;
void *push(void *argf)
	{

while(1)
{ sleep(1);
	pthread_mutex_lock(&lock);
	if(front == -1)
		{ front++;
	}
	if(rear == size-1)
		{ printf(" Queue is full");
		
}	
else
		{
			queue[++rear]=counter++;
}
	pthread_mutex_unlock(&lock);

}

}

void *pop(void *argf)
{

while(1)
{
	pthread_mutex_lock(&lock);

	if(front<rear)
		printf("%d \n",queue[++front]);

	pthread_mutex_unlock(&lock);
}

}

