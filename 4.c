#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

char val=10;
unsigned int data=0;

void *even_num(void *ptr)
{
   while(data<=val)
   {
   sleep(1);
   if((data % 2 ==0))
     {
       printf("even :%d\n",data);
       data++;
      }

   }
}


  
 void *odd_num(void *ptr)
{
   while(data<=val)
   {
   sleep(1);
   if((data % 2 !=0))
     {
       printf("odd:%d\n",data);
       data++;
      }

   }  
}
void main(void)
{
pthread_t tid[2];

pthread_create(&tid[0],NULL,&even_num,NULL);
pthread_create(&tid[1],NULL,&odd_num,NULL);

pthread_join(tid[0],NULL);
pthread_join(tid[1],NULL);
}
