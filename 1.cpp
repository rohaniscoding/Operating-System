/*
Write a C program to demonstrate the ue of fork() System call.
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
   
   printf("\n\tName : Rohan kukreti\n");
   printf("\tRoll No. : 43\n");
   printf("\tUniversity id : 20011768\n");
   
   
   //Fork function
   
   fork();
   fork();
   
   printf("Hello fork\n");
   printf("Process id: %d \n\n",getpid());
   return 0;

}
