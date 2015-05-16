#include <stdio.h>
int main()
{
    int i = 0;
	char ch;
	int ishead = 1;
	while(scanf("%c", &ch) != EOF)
    {
	   if(ch == '\n'){ 
		   printf("%c", ch);
		   ++i;
		   ishead = 1;
	   }	
	   else if(ishead == 1){
		   printf("第%d行：%c", i, ch);
		   ishead = 0;
 	   }
	   else{
           printf("%c", ch);	   
	   }
	} 
	return 0;
}
