// Orphan process

#include<stdio.h>
#include <sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
   
	printf("\n\tName : Rohan kukreti\n");
	printf("\tRoll No. : 43\n");
	printf("\tUniversity id : 20011768\n");
	
	int pid = fork();

	if(pid == 0){
		sleep(5);
		printf("Child Process is Running\n");
		exit(0);
	}else{
		
		printf("Parent Process is Running\n");
	}

	return 0;
	
}
