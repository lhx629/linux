#include"ch1.h"
int main()
{
	FILE *fp;
	char buf[80];
	memset(buf,0,sizeof(buf));

	fp=fopen("./test4.txt","a+");
	fputs("\tappend new information!",fp);

	fp=freopen("./test4.txt","r",fp);
	fgets(buf,sizeof(buf),fp);
	fprintf("content of file : %s\n",buf);

	fclose(fp);
	return 0;
}
