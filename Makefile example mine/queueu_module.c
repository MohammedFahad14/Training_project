#include "queue_module.h"
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
int main()
{
	pthread_t thr1,thr2;
	
	pthread_create(&thr1,NULL,push,NULL);
	pthread_create(&thr2,NULL,pop,NULL);

	pthread_join(thr1,NULL);		
	pthread_join(thr2,NULL);
	
pthread_mutex_destroy(&lock);
}
