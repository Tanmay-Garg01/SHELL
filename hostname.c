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
void vim();
void username();
void vi();
void pinfo2();
void echo();
void showpwd();
void printEveryTime();
void pinfo();
void history();
void addTohist();


extern void hostname()
{
	if(gethostname(host,256)!= 0)
		perror("");
}