#include<stdio.h>
//#include<stdlib.h>//for exit function
#include<unistd.h> // for sleep function
#include<pthread.h> // for thread creation

int val=10;
void thread_handler1(void *ptr)
{
   for(int i=1;i<=val;i++)
   {
   sleep(1);
   printf("thread1 is running\n");
   }
   printf("thread1 id=%lu\n",pthread_self());
   }

void thread_handler2(void *ptr)
{
   for(int i=1;i<=val;i++)
   {
   sleep(1);
   printf("thread2 is running\n");
   }
   printf("thread2 id=%lu\n",pthread_self());   
}

int main()
{
pthread_t thread[2];
char *msg1= "Kavitha";
char *msg2= "Sree";
pthread_create(&thread[0],NULL,&thread_handler1,(void *) msg1);
pthread_create(&thread[1],NULL,&thread_handler2,(void *) msg2);
pthread_join(thread[0],NULL);

//pthread_create(&thread[1],NULL,&thread_handler2,(void *) msg2);
pthread_join(thread[1],NULL);
return 0;
}
