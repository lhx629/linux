#include"ch1.h"
int main()
{
	FILE *fp;
	fp=fdopen(1,"w+");
	fprintf(fp,"test data %s\n","hello wprld");
	fclose(fp);
	return 0;
}
