#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
//#define CONF /tmp/levy


int main(){

	FILE*read_fp=NULL;
	char buffer[BUFSIZ+1];
	int chars_read;
	memset(buffer,'\0',sizeof(buffer));
	read_fp=popen("uname -a","r");
	if(read_fp!=NULL){
		chars_read=fread(buffer,sizeof(char),BUFSIZ,read_fp);
		if(chars_read>0){
			printf("Output was:%s\n",buffer);
		}
		pclose(read_fp);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_SUCCESS);
}
