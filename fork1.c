#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	int  p;
	printf("before fork\n");
	p=fork();
	if(p==0)
	{
		printf("p=%d\n",p);
		printf("Iam child having id is %d\n",getpid());
	        printf("my parent  id is %d\n",getppid());
		//exit(0);
	}
	else
	{
	   printf("p=%d\n",p);
           printf("my child  id is %d\n",p);
           printf("Iam parent having id is %d\n",getpid());
        }
	printf("common\n");
}
