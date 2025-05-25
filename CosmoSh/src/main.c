// INLCUDES
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include<sys/wait.h>

//DEFINES
#define BUFF_SZE 4096 

int main(int argc, char** argv)
{
	pid_t pid;

	while(1){

		char command[BUFF_SZE];
		fgets(command, BUFF_SZE, stdin);
		
		pid = fork();

		if(pid != 0) {
			if(pid == -1) {
				printf("fork failed");
				exit(EXIT_FAILURE);
			}
		} else {

		}
	}	

	return 0;
}
