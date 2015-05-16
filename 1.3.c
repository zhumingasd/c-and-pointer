/*************************************************************************
	> File Name: 1.3.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年05月16日 星期六 07时24分46秒
 ************************************************************************/
#include <stdio.h>
int main()
{
	char ch;
	char checksum = 0;
	int ishead = 1;
	int i = 0;
	while(scanf("%c", &ch) != EOF)
	{
		checksum += ch;
		
		if(ch == '\n')
		{
			++i;
		    printf("%c", ch);
			ishead = 1;
		}
		else if(ishead == 1)
		{
            printf("第%d行：%c", i, ch);
		    ishead = 0;
		}
		else
		{
			printf("%c", ch);
		}
	}
	printf("%d\n", checksum);
	return 0;
}
