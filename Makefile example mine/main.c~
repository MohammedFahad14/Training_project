#include "queue_module.h"

#define size 50
pthread_mutex_t lock;
int rear,front,queue[50],counter;

int main()
{
	pthread_t thr1,thr2;
	
	pthread_create(&thr1,NULL,push,NULL);
	pthread_create(&thr2,NULL,pop,NULL);

	pthread_join(thr1,NULL);		
	pthread_join(thr2,NULL);
	
pthread_mutex_destroy(&lock);
}
