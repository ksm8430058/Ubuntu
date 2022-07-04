#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid = fork();

	if (pid == 0)
	{
		puts("Hi, I', child process");
	}
	else
	{
		printf("Child Process ID : %d \n", pid);
		sleep(30);
	}

	if(pid ==0)
		puts("Ens child process");
	else
		puts("End parent process");
	return 0;
}
