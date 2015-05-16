/*************************************************************************
	> File Name: 1.21.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年05月16日 星期六 07时52分33秒
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#define BUFSIZE 5
int main()
{
	char buf[BUFSIZE] = {0};
	int n = 0;
	while((n = read(STDIN_FILENO, buf, BUFSIZE)) > 0)
	{
		if(write(STDOUT_FILENO, buf, n) != n)
		{
			printf("write error : %s\n", strerror(errno));
		}		
	}
	while(n < 0)
	{
		printf("read error: %s\n", strerror(errno));
	}
	
	return 0;
}
