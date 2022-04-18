/* Example program for Zombie process*/

#include<stdio.h>
#include<stdlib.h> // for exit function
#include<unistd.h> // for fork function and sleep function
#include<sys/types.h> // for fork function


int main()
{
pid_t child_pid=fork();

if(child_pid>0)
{
	printf("pid of parent = %d\n",getpid());
	sleep(5);
	printf("pid of parent = %d\n",getpid());
}
else
{
	printf("pid of child = %d pid of parent = %d\n",getpid(),getppid());
//	exit(0);
}
return 0;
}
