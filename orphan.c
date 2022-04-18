/* Example program for Orphan process*/

#include<stdio.h>
#include<stdlib.h> // for sleep function
#include<unistd.h> // for fork function
#include<sys/types.h> // for fork function


int main()
{
pid_t child_pid=fork();

if(child_pid>0)
{
	printf("pid of parent = %d\n",getpid());
	sleep(2);
}
else
{
	//printf("pid of child = %d pid of parent = %d\n",getpid(),getppid());
	sleep(10);
	printf("pid of child = %d pid of parent = %d\n",getpid(),getppid());
}
return 0;
}
