#include"ch1.h"

/*int main()
{
	int fd;
	fd=open("./test1.txt",O_CREAT,0644);
	printf("file fd =%d\n",fd);
	close(fd);
	return 0;
}*/

int main()
{
        FILE *fd;
        fd=fopen("./test1.txt","w");
        printf("file fd =%d\n",fd->_fileno);
        fclose(fd);
        return 0;
}

