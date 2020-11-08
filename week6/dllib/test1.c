#include"../ch1.h"
int main()
{
	void *dlib=dlopen("./libdlib.so",RTLD_NOW);
	if(!dlib)
	{
		printf("dlopen fail!\n");
		exit(-1);
	}
	void (*dfunc)(void)=dlsym(dlib,"dynamic_lib_call");

	void(*fn)(int)=dlsym(dlib,"dsum");
	if(!dfunc||!fn)
	{
		printf("dfunc or fn is fail!\n");
		exit(-1);
	}
	fn(100);
	dfunc();
	dlclose(dlib);
	return 0;
}
