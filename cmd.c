#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	puts("커맨드 명령어를 입력하세요");
	char* input;
	input=(char*)malloc(255);
	scanf("%s",input);
	system(input);
	return 0;
}