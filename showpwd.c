#include<stdlib.h>
#include<dirent.h>
#include<stdio.h>
#include<string.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<time.h>
#include<sys/types.h>
#include<sys/resource.h>


struct stat statRes;
struct rusage usage;
char command[100],cpy_cmd[100];
char home[100],pwd[100],dir[100],user[256],host[256];
int id;

void ls();
void hme();
void pd();
void cd();
void username();
void vi();
void hostname();
void echo();
void printEveryTime();
void pinfo();
void pinfo2();
void history();
void addTohist();


extern void showpwd()
{
	if(strcmp(home,pwd) == 0)
		write(1,"~\n",3);
	else if (strcmp(pwd,home) < 1)
	{
		printf("\033[1;32m%s\n",pwd);
	}
	else 
	{
		char tobeprinted[100];
		int i;
		printf("\033[1;32m~");
		for(i=strlen(home);i<strlen(pwd);i++)
			{
				printf("\033[1;32m%c",pwd[i]);
			}
		printf("\033[1;32m\n");
	}

}