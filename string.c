#include <stdio.h>
#include <string.h>

int main(void)
{
	char *loc, buf1[80],buf2[80];

	printf("Enter the string: ");
	gets(buf1);
	printf("Enter the string :");
	gets(buf2);
	
	loc=strstr(buf1,buf2);
	
	printf("%s	%d",buf2,loc-buf1);
	return 0;
}