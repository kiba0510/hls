#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

/**
 *main - expected result as bash ls with options -a and -l 
 *argv = argument vector
 *argc = argument counts
 **/
int main(int argc, char *argv[])	
{
	pid_t pid;

	pid = fork();
	if(pid == 0)
	{
		if(argc == 1)
		{
			execve("/bin/ls", argv, NULL);
		}
		else if(argc == 2)
		{
			if(strcmp(argv[1], "-a") == 0)
			{
			execve("/bin/ls", argv, NULL);
			}
		else if (strcmp(argv[1], "-l") == 0)
		{
			execve("/bin/ls", argv, NULL);
		}
		}
	}
	return 0;
}
