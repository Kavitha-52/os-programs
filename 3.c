#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

char ch=65;

void *capital(void *ptr)
{
   while(ch<=90)
   {
   sleep(1);
   printf("%c",ch);
  }
}

void *small(void *ptr)
{
   while(ch<=90)
   {
   sleep(1);
   printf("%c\n",ch+32);
   ch++;
   }
}

int main()
{
pthread_t thread[2];
pthread_create(&thread[0],NULL,&capital,NULL);
pthread_create(&thread[1],NULL,&small,NULL);

pthread_join(thread[0],NULL);
pthread_join(thread[1],NULL);
printf("\n");

}
