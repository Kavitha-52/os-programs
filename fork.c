#include <stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
void forkexample()
{
    // child process because return value zero
    if (fork() == 0)
{
        printf("\nHello from Child!\n");
        printf("PID of child=%d\nPID of parent of child=%d\n",getpid(),getppid());
	getchar();
}
    // parent process because return value non-zero.
    else
{ 
       printf("Hello from Parent!\n");
        printf("PID of parent=%d\n",getpid());
	getchar();
}
}
int main()
{
    forkexample();
    return 0;
}
