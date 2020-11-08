#include"../ch1.h"
void dynamic_lib_call(void)
{
	printf("Dynamic lib is called!\n");
}
void dsum(int max)
{
	int s=0;
	for(int i=0;i<=max;i++)
	{
		s=s+i;
	}
	printf("sum =%d",s);
}
