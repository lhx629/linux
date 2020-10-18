#include"ch1.h"
int main()
{
	FILE *fp;
	char buf[80];
	int a;
	int b;
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./test1.txt","w"))==NULL)
		perror("open failed!\n");
	printf("please write what you want to write:");
	b = fgets(buf,sizeof(buf),stdin);
	printf("Content is %s\n ",buf);
	printf("fgets is %d",b);
	a=fwrite(buf,sizeof(buf),1,fp);
	printf("file is %d\n",a);
       	fclose(fp);
	return 0;
}
