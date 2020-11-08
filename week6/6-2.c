#include"ch1.h"
int main(int argc,char *argv[])
{
	for(int i=0;i<argc;i++)
	{
		printf("argv[%d]:%s\n",i,argv[i]);
	}

	if(argc!=3)
	{
		printf("you shuold input two number");
		exit(0);
	}
	if(argc==3)
	{
		int a,b;
		a=atoi(argv[1]);
		b=atoi(argv[2]);

		printf("avg=%d\n",a+b);
	}



	return 0;
}
