#include"ch1.h"
int main()
{
	FILE *fp;
	int fd;
	fd=open("./test3.txt",O_RDWR);
	fp=fdopen(fd,"w+");
	fprintf(fp,"test data %s\n","hello wprld");
	fclose(fp);
	return 0;
}
