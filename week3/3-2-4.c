#include"ch1.h"
int main(int argc,char *argv[])
{
	FILE *fp;
	int i;

	if((fp=fopen("./test2.txt","w"))==NULL)
		perror("open failed!\n");

	for(i=0;i<argc;i++)
	{
	fwrite(argv[i],sizeof(argv[i]),1,fp);

	}
	
       	fclose(fp);
	return 0;
}
