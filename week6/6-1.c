#include"ch1.h"
static void __attribute__((constructor)) before_main()
{
	printf("-----------before main--------\n");
}
static void __attribute__((destructor)) after_main()
{
	printf("------------after main---------\n");
}
int main()
{
	printf("-----------main Function-----------\n");
}

