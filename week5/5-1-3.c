#include"ch1.h"
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	printf("HELLO WORLD!");
	while(1);
	return 0;
}
