#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	FILE*write_fp;
	char buffer[BUFSIZ+1];

	sprintf(buffer,"hi This ia a pipe_test....\n");
	write_fp=popen("od -c","w");         //od-c 以二進位顯示

	if(write_fp!=NULL){
		fwrite(buffer,sizeof(char),strlen(buffer),write_fp);
		pclose(write_fp);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_SUCCESS);
}
