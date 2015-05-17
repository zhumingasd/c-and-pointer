/*************************************************************************
	> File Name: 1.4.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年05月16日 星期六 18时52分39秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{
	char buf_cin[MAX] = {0};
    char buf_tmp[MAX] = {0};
	int n_cin = 0;
    int n_tmp = 0;

	while(scanf("%c", &buf_cin[n_cin]) != EOF && n_cin < MAX){
		if(buf_cin[n_cin] == '\n'){
			printf("新输入1行:%s", buf_cin);
		    if(n_tmp !=0){
			    printf("之前输入的最长的一行是:%s", buf_tmp);
			}
            if(n_cin > n_tmp){
                printf("新行比之前输入的所有的行都要长\n");
				strncpy(buf_tmp, buf_cin, n_cin+1);
				n_tmp = n_cin;

				memset(buf_cin, 0, MAX);
				n_cin = -1;
			}
			else{
				printf("新行不如原来的最长行长\n");
			}
		}
		n_cin++;
	}
    printf("输入结束，最长的一行是:%s", buf_tmp);

	return 0;
}
