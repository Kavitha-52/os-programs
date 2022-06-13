#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
        pid_t p;
        printf("before fork\n");
	p=fork();
        if(p==0)
        {
                printf("p=%d\n",p);
                printf("Iam child having id is %d\n",getpid());
                printf("my parent  id is %d\n",getppid());
        }
        else
        {
		wait(0);
           printf("p=%d\n",p);
           printf("my child  id is %d\n",p);
           printf("Iam parent having id is %d\n",getpid());
        }
        printf("common\n");
}

