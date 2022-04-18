#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void thread_handler(void *ptr)
{
   for(int i=1;i<=5;i++)
   {
   sleep(1);
   printf("thread is running\n");
   }
   printf("thread id=%d\n",pthread_self());   
}
int main()
{
pthread_t thread1;
char *msg = "Kavitha";
pthread_create(&thread1,NULL, &thread_handler, (void *)msg);
pthread_join(thread1,NULL);
return 0;
}
