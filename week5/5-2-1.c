#include"ch1.h"
int main()
{
	int fd;
	FILE *fp;
	char *s="HELLO WORLD!\n";

	if((fd=open("./test1-1.txt",O_CREAT|O_WRONLY,0644))==-1)
	{
		printf("Error to create file\n");
		exit(1);
	}
	if((fp=fopen("./test2-1.txt","w+"))==NULL)
	{
		printf("Error to create file\n");
		exit(1);
	}

	sleep(15);
	write(fp,s,strlen(s));
	fwrite(s,sizeof(char),strlen(s),fd);
	printf("AFTER WRITE\n");
	sleep(15);
	close(fd);
	return 0;
}
